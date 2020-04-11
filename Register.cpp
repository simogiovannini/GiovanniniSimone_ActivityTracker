//
// Created by simone on 11/04/20.
//

#include "Register.h"

void Register::addDay(Day *day) {
    days.insert(
            std::pair<std::string, std::unique_ptr<Day>>(day->getDate()->getShortString(), std::unique_ptr<Day>(day)));
}

bool Register::findDay(std::string date) {
    return days.find(date) != days.end();
}
