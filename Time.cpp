//
// Created by simone on 02/04/20.
//

#include "Time.h"

Time::Time(int hour, int minute) : hour(hour), minute(minute) {}

std::string Time::toString() const {
    std::string min;
    min = std::to_string(minute);
    if (minute < 10)
        min = "0" + min;
    return (std::to_string(hour) + ":" + min);
}

bool Time::isPrevious(const Time &other) const {
    if (hour < other.hour)
        return true;
    else if (hour > other.hour)
        return false;
    else {
        return minute <= other.minute;
    }
}
