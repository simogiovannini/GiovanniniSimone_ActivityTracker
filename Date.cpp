
//
// Created by simone on 02/04/20.
//

#include "Date.h"

Date::Date(int day, int month, int year) : day(day), month(month), year(year) {

}

std::string Date::toString() const {
    return (std::to_string(day) + " " + toStringMonth() + " " + std::to_string(year));
}

std::string Date::toStringMonth() const {
    switch (month) {
        case 1:
            return "Gen";
        case 2:
            return "Feb";
        case 3:
            return "Mar";
        case 4:
            return "Apr";
        case 5:
            return "Mag";
        case 6:
            return "Giu";
        case 7:
            return "Lug";
        case 8:
            return "Ago";
        case 9:
            return "Set";
        case 10:
            return "Ott";
        case 11:
            return "Nov";
        case 12:
            return "Dec";
    };
    return "";
}

std::string Date::getShortString() const {
    std::string m = std::to_string(month), d = std::to_string(day);

    if (month < 10)
        m = "0" + m;

    if (day < 10)
        d = "0" + d;

    return std::to_string(year) + "/" + m + "/" + d;
}

Date Date::dateFromString(const std::string &date) {
    std::string y = date.substr(0, 4);
    std::string m = date.substr(5, 2);
    std::string d = date.substr(8, 2);

    int year = std::stoi(y);
    int month = std::stoi(m);
    int day = std::stoi(d);

    Date da(day, month, year);
    return da;
}

bool Date::checkFormatDate(std::string date) {
    if (date.length() != 10) return false;
    if (date[4] != '/') return false;
    if (date[7] != '/') return false;

    std::string y = date.substr(0, 4);
    std::string m = date.substr(5, 2);
    std::string d = date.substr(8, 2);

    int year = std::stoi(y);
    int month = std::stoi(m);
    int day = std::stoi(d);

    if (year < 1900 || year > 2100) return false;
    if (month < 1 || month > 12) return false;

    int daysPerMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int max = daysPerMonth[month - 1];
    if (year % 4 == 0 && month == 2)
        max++;

    if (day < 1 || day > max) return false;

    return true;
}


