//
// Created by simone on 10/04/20.
//

#include <iostream>
#include "InputManager.h"

int InputManager::getNumber(int min, int max) {
    int value;
    while (true) {
        std::cin >> value;

        if (value < min || value > max) {
            std::cout << "Devi inserire un valore compreso tra " << min << " e " << max << "!" << std::endl
                      << "Valore: ";
            continue;
        }

        break;
    }
    return value;
}

std::string InputManager::getString() {
    std::string s;
    std::cin >> s;
    return s;
}

std::string InputManager::getDate() {
    std::string s;
    while (true) {
        std::cin >> s;
        if (!checkFormatDate(s)) {
            std::cout << "Devi inserire una data nel formato yyyy/mm/dd" << std::endl
                      << "Valore: ";
            continue;
        }
        break;
    }
    return s;
}

bool InputManager::checkFormatDate(std::string date) {
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
