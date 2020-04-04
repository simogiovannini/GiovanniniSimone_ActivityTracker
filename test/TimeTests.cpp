//
// Created by simone on 04/04/20.
//
#include <iostream>
#include <gtest/gtest.h>
#include "../Time.h"

TEST(TimeTests, Constructor) {
    Time t(17, 17);

    EXPECT_EQ(t.getHour(), 17);
    EXPECT_EQ(t.getMinute(), 17);

    Time *s = new Time(18, 0);

    EXPECT_EQ(s->getHour(), 18);
    EXPECT_EQ(s->getMinute(), 0);
}

TEST(TimeTests, toString) {
    Time t(18, 35);
    EXPECT_EQ(t.toString(), "18:35");

    Time s(19, 0);
    EXPECT_EQ(s.toString(), "19:00");
}