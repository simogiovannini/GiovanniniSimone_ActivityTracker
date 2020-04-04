// Created by simone on 02/04/20.
//

#include "Activity.h"

#include <utility>

Activity::Activity(std::string description, std::unique_ptr<Time> &begin, std::unique_ptr<Time> &end) {
    this->description = std::move(description);
    this->begin = std::move(begin);
    this->end = std::move(end);
}
