#include <iostream>
#include "Time.h"
#include "Date.h"
#include "Day.h"
#include "InputManager.h"
#include "ActivityFactory.h"
#include "Register.h"
#include <memory>

Date *getCurrentDate();

void clearScreen();

void init(Register &reg, Day *&current);

int main() {
    Register reg;
    Day *current;
    init(reg, current);
    int choice;

    do {
        clearScreen();
        std::cout << current->toString();
        std::cout << "\n1) Aggiungi attività\n"
                     "2) Elimina attività\n"
                     "3) Cambia giorno\n"
                     "0) Esci\n"
                     "Cosa vuoi fare? Inserisci scelta: ";

        choice = InputManager::getNumber(0, 3);

        switch (choice) {
            case 1:
                current->addActivity(ActivityFactory::createActivity());
                std::cout << "\nInserimento avvenuto con successo!";
                break;
            case 2:
                if (current->getActivitiesLength() == 0) {
                    std::cout << "\nNon c'è nessuna attività da eliminare!";
                } else {
                    std::cout << "\nInserisci indice attività da eliminare: ";
                    int i = InputManager::getNumber(1, current->getActivitiesLength());
                    current->removeActivity(i);
                    std::cout << "\nEliminazione avvenuta con successo!";
                }
                break;
            case 3:
                std::cout << "\nInserisci data del giorno al quale ti vuoi spostare (yyyy/mm/dd): ";
                std::string date = InputManager::getDate();
                if (!reg.findDay(date))
                    reg.addDay(new Day(Date::dateFromString(date)));
                current = reg.getDay(date);
                std::cout << "\nCambio data avvenuto con successo!";
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
    std::cout << "\n\n\n\n";
}

void init(Register &reg, Day *&current) {
    current = new Day(getCurrentDate());
    reg.addDay(current);
}