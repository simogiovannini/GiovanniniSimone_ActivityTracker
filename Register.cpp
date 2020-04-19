//
// Created by simone on 11/04/20.
//

#include "Register.h"

void Register::addDay(Day day) {
    days[day.getDate().getShortString()] = day;
}

bool Register::findDay(const std::string date) const {
    return days.find(date) != days.end();
}

Day &Register::getDay(const std::string &date) {
    return days[date];
}

bool Register::removeDay(const std::string date) {
    if (!findDay(date))
        return false;

    days.erase(date);
    return true;
}

int Register::getDaysNum() const {
    return days.size();
}
