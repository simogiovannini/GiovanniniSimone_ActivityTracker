//
// Created by simone on 11/04/20.
//

#ifndef ACTIVITYTRACKER_REGISTER_H
#define ACTIVITYTRACKER_REGISTER_H


#include <map>
#include "Activity.h"
#include "Day.h"

class Register {
public:
    void addDay(Day day);

    bool findDay(std::string date);

    Day &getDay(std::string &date);

    bool removeDay(std::string date);

    int getDaysNum();

private:
    std::map<std::string, Day> days;
};


#endif //ACTIVITYTRACKER_REGISTER_H
