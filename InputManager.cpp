//
// Created by simone on 10/04/20.
//

#include <iostream>
#include "InputManager.h"
#include "Date.h"

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
        if (!Date::checkFormatDate(s)) {
            std::cout << "Devi inserire una data nel formato yyyy/mm/dd" << std::endl
                      << "Valore: ";
            continue;
        }
        break;
    }
    return s;
}
