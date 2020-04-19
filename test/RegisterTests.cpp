//
// Created by simone on 19/04/20.
//
#include <gtest/gtest.h>
#include "../Time.h"
#include "../Activity.h"
#include "../Date.h"
#include "../Register.h"

TEST(RegisterTests, AddRemoveActivity) {
    Date date1(13, 5, 1999);
    Day d1(date1);

    Date date2(5, 4, 2002);
    Day d2(date2);

    Register r;
    r.addDay(d1);
    r.addDay(d2);

    EXPECT_EQ(r.getDaysNum(), 2);

    r.removeDay(d2.getDate().getShortString());

    EXPECT_EQ(r.getDaysNum(), 1);

    EXPECT_EQ(r.removeDay(d2.getDate().getShortString()), false);
}

TEST(RegisterTests, ModifyActivity) {

}