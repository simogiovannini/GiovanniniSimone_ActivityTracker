//
// Created by simone on 06/04/20.
//

#include <gtest/gtest.h>
#include "../Day.h"

TEST(DayTests, Constructor) {
    std::unique_ptr<Date> date(new Date(13, 5, 1999));
    std::unique_ptr<Day> day(new Day(date));
    EXPECT_EQ(day->getDate()->toString(), "13 Mag 1999");
}