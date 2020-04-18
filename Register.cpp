//
// Created by simone on 11/04/20.
//

#include "Register.h"

void Register::addDay(Day day) {
    days[day.getDate().getShortString()] = day;
}

bool Register::findDay(std::string &date) {
    return days.find(date) != days.end();
}

Day &Register::getDay(std::string &date) {
    return days[date];
}

bool Register::removeDay(std::string date) {
    if (!findDay(date))
        return false;

    days.erase(date);
    return true;
}

int Register::getDaysNum() {
    return days.size();
}
