//
// Created by simone on 02/04/20.
//

#include "Time.h"

Time::Time(int hour, int minute) : hour(hour), minute(minute) {}

std::string Time::toString() {
    return (std::to_string(hour) + ":" + std::to_string(minute));
}
