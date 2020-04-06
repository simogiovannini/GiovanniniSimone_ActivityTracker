//
// Created by simone on 02/04/20.
//

#include "Day.h"

Day::Day(std::unique_ptr<Date> &date) {
    this->date = std::move(date);
}

Date *Day::getDate() {
    return date.get();
}
