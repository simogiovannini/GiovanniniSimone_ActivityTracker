#include <iostream>
#include "Time.h"
#include "Date.h"
#include "Day.h"
#include <memory>


Date *getCurrentDate();

int main() {
    Day today((getCurrentDate()));
    std::cout << today.toString();
}

Date *getCurrentDate() {
    time_t t = time(0);
    struct tm *timeStruct = localtime(&t);

    int year, month, day;

    year = timeStruct->tm_year + 1900;
    month = timeStruct->tm_mon + 1;
    day = timeStruct->tm_mday;

    return new Date(day, month, year);
}