// Created by simone on 02/04/20.
//

#include "Activity.h"

#include <utility>

Activity::Activity(std::string description, Time &begin, Time &end) : description(std::move(description)), begin(begin),
                                                                      end(end) {}

Time &Activity::getBeginTime() {
    return begin;
}

std::string Activity::toString() {

    return "Descrizione: " + description + "\nOra inizio: " + begin.toString() + "\nOra fine: " + end.toString() +
           "\n";
}
