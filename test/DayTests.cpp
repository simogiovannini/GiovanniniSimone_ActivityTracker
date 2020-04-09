//
// Created by simone on 06/04/20.
//

#include <gtest/gtest.h>
#include "../Day.h"

TEST(DayTests, Constructor) {
    Date *date = new Date(13, 5, 1999);
    std::unique_ptr<Day> day(new Day(date));
    EXPECT_EQ(day->getDate()->toString(), "13 Mag 1999");
}

TEST(DayTests, addActivity){
    //controllo l'inserimento ordinato
    Date* d = new Date(9, 4, 2020);
    std::unique_ptr<Day> today(new Day(d));

    Time* t1 = new Time(10, 0);
    Time* t2 = new Time(12, 0);

    Activity* a = new Activity("studio", t1, t2);

    today->addActivity(a);

    t1 = new Time(13, 0);
    t2 = new Time(15,30);

    a = new Activity("lettura", t1, t2);

    today->addActivity(a);

    t1 = new Time(8, 15);
    t2 = new Time(13,30);

    a = new Activity("allenamento", t1, t2);

    today->addActivity(a);

    EXPECT_EQ(a, today->getFirstActivity());
}