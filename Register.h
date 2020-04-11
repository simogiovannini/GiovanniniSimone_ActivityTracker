//
// Created by simone on 11/04/20.
//

#ifndef ACTIVITYTRACKER_REGISTER_H
#define ACTIVITYTRACKER_REGISTER_H


#include <map>
#include "Activity.h"

class Register {
private:
    std::map<std::string, std::unique_ptr<Activity>> days;
};


#endif //ACTIVITYTRACKER_REGISTER_H
