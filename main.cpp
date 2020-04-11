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
                std::cout << "\nInserimento avvenuto con successo!";
                break;
            case 2:
                if (today.getActivitiesLength() == 0) {
                    std::cout << "\nNon c'è nessuna attività da eliminare!";
                } else {
                    std::cout << "\nInserisci indice attività da eliminare: ";
                    int i = InputManager::getNumber(1, today.getActivitiesLength());
                    today.removeActivity(i);
                    std::cout << "\nEliminazione avvenuta con successo!";
                }
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