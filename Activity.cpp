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

void Activity::setBegin(Time &_begin) {
    this->begin = _begin;
}

void Activity::setEnd(Time &_end) {
    this->end = _end;
}

void Activity::setDescription(std::string &_description) {
    this->description = _description;
}

std::string Activity::getDescription() {
    return description;
}

