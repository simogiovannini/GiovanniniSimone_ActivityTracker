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
    Day();

    explicit Day(Date date);

    Date &getDate();

    void addActivity(Activity activity);

    std::string toString();

    int getActivitiesNum();

    Activity &getFirstActivity();

    void removeActivity(int index);

    bool modifyActivity(int index, std::string &description);

    bool modifyActivity(int index, Time &time, bool begin);

private:
    Date date;
    std::list<Activity> activities;
};


#endif //ACTIVITYTRACKER_DAY_H
