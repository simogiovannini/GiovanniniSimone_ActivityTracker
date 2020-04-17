//
// Created by simone on 06/04/20.
//

#include <gtest/gtest.h>
#include "../Day.h"

TEST(DayTests, Constructor) {
    Date date(13, 5, 1999);
    Day day(date);
    EXPECT_EQ(day.getDate().toString(), "13 Mag 1999");
}

TEST(DayTests, addActivity) {
    //controllo l'inserimento ordinato

    Date d(9, 4, 2020);
    Day today(d);

    Time t1(10, 0);
    Time t2(12, 0);

    Activity a("studio", t1, t2);

    today.addActivity(a);

    Time t3(13, 0);
    Time t4(15, 30);

    Activity a1("lettura", t3, t4);

    today.addActivity(a1);

    Time t5(8, 15);
    Time t6(13, 30);

    Activity a2("allenamento", t5, t6);

    today.addActivity(a2);

    EXPECT_EQ(a2.toString(), today.getFirstActivity().toString());
    EXPECT_EQ(today.getActivitiesNum(), 3);
}