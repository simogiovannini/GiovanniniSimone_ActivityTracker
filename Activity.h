//
// Created by simone on 02/04/20.
//

#ifndef ACTIVITYTRACKER_ACTIVITY_H
#define ACTIVITYTRACKER_ACTIVITY_H

#include <string>
#include "Time.h"


class Activity {
public:
    Activity(std::string description, Time begin, Time end);

    virtual ~Activity();

private:
    std::string description;
    Time begin;
    Time end;
};


#endif //ACTIVITYTRACKER_ACTIVITY_H
