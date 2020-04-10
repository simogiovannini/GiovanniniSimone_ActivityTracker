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
                      << "Valore:";
            continue;
        }

        break;
    }
    return value;
}
