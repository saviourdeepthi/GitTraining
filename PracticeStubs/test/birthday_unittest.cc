#include "gtest/gtest.h"
#include "../main/birthday.h"

namespace {

    TEST(Birthday, NotABirthday) {
        ASSERT_EQ(false, IsBirthday());
    }

    TEST(Birthday, IsABirthday) {
        ASSERT_EQ(true, IsBirthday());
    }

}