//
// Created by simone on 02/04/20.
//

#ifndef ACTIVITYTRACKER_ACTIVITY_H
#define ACTIVITYTRACKER_ACTIVITY_H

#include <string>
#include <memory>
#include "Time.h"


class Activity {
public:
    Activity(std::string description, Time *&begin, Time *&end);

    Time *getBeginTime();

    std::string toString();

private:

    std::string description;
    std::unique_ptr<Time> begin;
    std::unique_ptr<Time> end;
};


#endif //ACTIVITYTRACKER_ACTIVITY_H
