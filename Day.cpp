//
// Created by simone on 02/04/20.
//

#include <iostream>
#include "Day.h"

Day::Day(Date *&date) {
    this->date = std::unique_ptr<Date>(date);
}

Date *Day::getDate() {
    return date.get();
}

void Day::addActivity(Activity *&activity) {

}

std::string Day::toString() {
    std::string res = "";
    res += date->toString() + "\n";
    auto it = activities.begin();
    while (it != activities.end()) {
        res += (*it)->toString() + "\n";
    }
    return res;
}

