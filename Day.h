//
// Created by simone on 02/04/20.
//

#ifndef ACTIVITYTRACKER_DAY_H
#define ACTIVITYTRACKER_DAY_H

#include <list>
#include <memory>
#include "Date.h"
#include "Activity.h"

class Day {
public:
    explicit Day(std::unique_ptr<Date> &date);

    Date *getDate();

private:
    std::unique_ptr<Date> date;
    std::list<std::unique_ptr<Activity>> activities;
};


#endif //ACTIVITYTRACKER_DAY_H
