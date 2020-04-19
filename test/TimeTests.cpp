//
// Created by simone on 04/04/20.
//
#include <gtest/gtest.h>
#include "../Time.h"

TEST(TimeTests, Constructor) {
    Time t(17, 17);

    EXPECT_EQ(t.getHour(), 17);
    EXPECT_EQ(t.getMinute(), 17);

    Time s(18, 0);

    EXPECT_EQ(s.getHour(), 18);
    EXPECT_EQ(s.getMinute(), 0);
}

TEST(TimeTests, toString) {
    Time t(18, 35);
    EXPECT_EQ(t.toString(), "18:35");

    Time s(19, 0);
    EXPECT_EQ(s.toString(), "19:00");
}

TEST(TimeTests, isPrevious) {
    Time t(18, 0), s(17, 15), u(18, 0), v(19, 45);

    EXPECT_EQ(s.isPrevious(t), true);
    EXPECT_EQ(t.isPrevious(u), true);
    EXPECT_EQ(v.isPrevious(t), false);
}