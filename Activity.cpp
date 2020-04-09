// Created by simone on 02/04/20.
//

#include "Activity.h"

#include <utility>

Activity::Activity(std::string description, Time *&begin, Time *&end) {
    this->description = std::move(description);
    this->begin = std::unique_ptr<Time>(begin);
    this->end = std::unique_ptr<Time>(end);
}

Time *Activity::getBeginTime() {
    return begin.get();
}

std::string Activity::toString() {

    return "Descrizione: " + description + "\nOra inizio: " + begin->toString() + "\nOra fine: " + end->toString() +
           "\n";
}
