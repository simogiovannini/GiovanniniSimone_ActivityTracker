//
// Created by simone on 02/04/20.
//

#ifndef ACTIVITYTRACKER_DATE_H
#define ACTIVITYTRACKER_DATE_H


#include <string>

class Date {
public:
    Date(int day, int month, int year);

    std::string toString();

    std::string getShortString();

private:
    int day;
    int month;
    int year;

    std::string toStringMonth();
};


#endif //ACTIVITYTRACKER_DATE_H
