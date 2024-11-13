#include "my_dep.h"

#include <gtest/gtest.h>


class MyDepTest: public ::testing::Test {
 protected:
  MyDepTest() {
    // Setup
  }

  virtual ~MyDepTest() {
    // Teardown
  }
};

TEST_F(MyDepTest, ItCanGetNumber) {
  int expected = 7;
  int actual = my_dep::GetNumber();
  ASSERT_EQ(expected, actual);
}
