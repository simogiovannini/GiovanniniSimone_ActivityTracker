//
// Created by simone on 10/04/20.
//

#include <iostream>
#include "ActivityFactory.h"
#include "InputManager.h"

Time ActivityFactory::createTime() {
    std::cout << "Inserisci ora: ";
    int hour = InputManager::getNumber(0, 23);

    std::cout << "Inserisci minuto: ";
    int minute = InputManager::getNumber(0, 59);

    Time t(hour, minute);
    return t;
}

Activity ActivityFactory::createActivity() {
    std::cout << "\nInserisci descrizione nuova attività: ";
    std::string description = InputManager::getString();

    std::cout << "A che ora hai iniziato?\n";
    Time begin = createTime();

    Time end(0, 0);
    while (true) {
        std::cout << "A che ora hai finito?\n";
        end = createTime();

        if (end.isPrevious(begin)) {
            std::cout << "L'orario di fine deve essere successivo a quello di inizio!\n";
            continue;
        }

        break;
    }
    Activity a(description, begin, end);
    return a;
}
