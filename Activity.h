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
    Activity(std::string description, Time &begin, Time &end);

    Time &getBeginTime();

    std::string toString();

    void setBegin(Time &_begin);

    void setEnd(Time &_end);

    void setDescription(std::string &_description);


private:

    std::string description;
    Time begin;
    Time end;
};


#endif //ACTIVITYTRACKER_ACTIVITY_H
