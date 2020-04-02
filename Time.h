//
// Created by simone on 02/04/20.
//

#ifndef ACTIVITYTRACKER_TIME_H
#define ACTIVITYTRACKER_TIME_H

#include <string>

class Time {
public:
    Time(int hour, int minute);

    std::string toString();

private:
    int hour;
    int minute;
};


#endif //ACTIVITYTRACKER_TIME_H
