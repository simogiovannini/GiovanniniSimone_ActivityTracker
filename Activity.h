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
    Activity(std::string description, const Time &begin, const Time &end);

    Time &getBeginTime();

    std::string toString() const;

    void setBegin(const Time &_begin);

    void setEnd(const Time &_end);

    void setDescription(const std::string &_description);

    std::string getDescription() const;

private:

    std::string description;
    Time begin;
    Time end;
};


#endif //ACTIVITYTRACKER_ACTIVITY_H
