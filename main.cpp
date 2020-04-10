#include <iostream>
#include "Time.h"
#include "Date.h"
#include "Day.h"
#include "InputManager.h"
#include "ActivityFactory.h"
#include <memory>


Date *getCurrentDate();

void clearScreen();

int main() {
    Day today((getCurrentDate()));
    int choice;

    do {
        clearScreen();
        std::cout << today.toString();
        std::cout << "\n1) Aggiungi attività\n"
                     "2) Elimina attività\n"
                     "0) Esci\n"
                     "Cosa vuoi fare? Inserisci scelta: ";

        choice = InputManager::getNumber(0, 2);

        switch (choice) {
            case 1:
                today.addActivity(ActivityFactory::createActivity());
                break;
            case 2:
                break;
        }

    } while (choice != 0);


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

void clearScreen() {
    for (int n = 0; n < 10; n++)
        std::cout << "\n\n\n\n\n\n\n\n\n\n";
}