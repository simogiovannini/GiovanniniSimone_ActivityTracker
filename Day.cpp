//
// Created by simone on 02/04/20.
//

#include <iostream>
#include "Day.h"

Day::Day(Date *date) {
    this->date = std::unique_ptr<Date>(date);
}

Date *Day::getDate() {
    return date.get();
}

void Day::addActivity(Activity *activity) {
    if (activities.empty())
        activities.push_back(std::unique_ptr<Activity>(activity));
    else {
        auto it = activities.begin();
        while (it != activities.end()) {
            if (activity->getBeginTime()->isPrevious((*it)->getBeginTime()))
                break;
            it++;
        }
        activities.insert(it, std::unique_ptr<Activity>(activity));
    }
}

std::string Day::toString() {
    std::string res;
    res += "Data: " + date->toString() + "\n\n";
    if (activities.empty()) {
        res += "Non hai registrato ancora nessuna attività!\n";
    } else {
        res += "Lista attività:\n";
        int index = 1;
        auto it = activities.begin();
        while (it != activities.end()) {
            res += std::to_string(index) + ")\n";
            res += (*it)->toString() + "\n";
            it++;
            index++;
        }
    }
    return res;
}

int Day::getActivitiesLength() {
    return activities.size();
}

Activity *Day::getFirstActivity() {
    return activities.front().get();
}

void Day::removeActivity(int index) {
    auto it = activities.begin();
    for (int i = 0; i < index - 1; i++)
        it++;
    activities.erase(it);
}

