//
// Created by simone on 10/04/20.
//

#ifndef ACTIVITYTRACKER_ACTIVITYFACTORY_H
#define ACTIVITYTRACKER_ACTIVITYFACTORY_H


#include "Time.h"
#include "Activity.h"

class ActivityFactory {
public:
    static Time createTime();

    static Activity createActivity();
};


#endif //ACTIVITYTRACKER_ACTIVITYFACTORY_H
