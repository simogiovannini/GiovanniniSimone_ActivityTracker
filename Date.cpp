
//
// Created by simone on 02/04/20.
//

#include "Date.h"

Date::Date(int day, int month, int year) : day(day), month(month), year(year) {

}

std::string Date::toString() {
    return (std::to_string(day) + " " + toStringMonth() + " " + std::to_string(year));
}

std::string Date::toStringMonth() {
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

std::string Date::getShortString() {
    std::string m = std::to_string(month), d = std::to_string(day);

    if (month < 10)
        m = "0" + m;

    if (day < 10)
        d = "0" + d;

    return std::to_string(year) + "/" + m + "/" + d;
}

Date *Date::dateFromString(std::string &date) {
    std::string y = date.substr(0, 4);
    std::string m = date.substr(5, 2);
    std::string d = date.substr(8, 2);

    int year = std::stoi(y);
    int month = std::stoi(m);
    int day = std::stoi(d);

    return new Date(day, month, year);
}


