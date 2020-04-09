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
    activities.push_back(std::unique_ptr<Activity>(activity));
}

std::string Day::toString() {
    std::string res;
    res += "Data: " + date->toString() + "\n\n";
    res += "Lista attività:\n";
    int index = 1;
    auto it = activities.begin();
    while (it != activities.end()) {
        res += std::to_string(index) + ")\n";
        res += (*it)->toString() + "\n";
        it++;
        index++;
    }
    return res;
}

