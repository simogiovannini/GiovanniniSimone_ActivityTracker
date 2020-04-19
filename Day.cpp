//
// Created by simone on 02/04/20.
//

#include <iostream>
#include "Day.h"

Day::Day(Date date) : date(date) {}

Date &Day::getDate() {
    return date;
}

void Day::addActivity(Activity activity) {
    if (activities.empty())
        activities.push_back(activity);
    else {
        auto it = activities.begin();
        while (it != activities.end()) {
            if (activity.getBeginTime().isPrevious((*it).getBeginTime()))
                break;
            it++;
        }
        activities.insert(it, activity);
    }
}

std::string Day::toString() {
    std::string res;
    res += "Data: " + date.toString() + "\n\n";
    if (activities.empty()) {
        res += "Non hai registrato ancora nessuna attività!\n";
    } else {
        res += "Lista attività:\n";
        int index = 1;
        auto it = activities.begin();
        while (it != activities.end()) {
            res += std::to_string(index) + ")\n";
            res += (*it).toString() + "\n";
            it++;
            index++;
        }
    }
    return res;
}

int Day::getActivitiesNum() {
    return activities.size();
}

Activity &Day::getFirstActivity() {
    return activities.front();
}

void Day::removeActivity(int index) {
    auto it = activities.begin();
    for (int i = 0; i < index - 1; i++)
        it++;
    activities.erase(it);
}

Day::Day() : date(0, 0, 0) {}

bool Day::modifyActivity(int index, std::string description) {
    auto it = activities.begin();
    std::advance(it, index - 1);
    (*it).setDescription(description);
    return true;
}

bool Day::modifyActivity(int index, Time &time, bool begin) {
    auto it = activities.begin();
    std::advance(it, index - 1);
    if (begin)
        (*it).setBegin(time);
    else
        (*it).setEnd(time);
    return true;
}

