//
// Created by simone on 02/04/20.
//

#ifndef ACTIVITYTRACKER_DATE_H
#define ACTIVITYTRACKER_DATE_H


#include <string>

class Date {
public:
    Date(int day, int month, int year);

    std::string toString() const;

    std::string getShortString() const;

    static Date dateFromString(const std::string &date);

    static bool checkFormatDate(std::string date);

private:
    int day;
    int month;
    int year;

    std::string toStringMonth() const;
};


#endif //ACTIVITYTRACKER_DATE_H
