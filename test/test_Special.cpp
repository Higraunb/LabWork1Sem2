#include "HSpecial.h"

#include <gtest.h>

TEST(TSpecialCar, can_create_TSpecialCar)
{
  ASSERT_NO_THROW(TSpecialCar bf);
}

TEST(TSpecialCar, cant_create_negative_values)
{
  ASSERT_ANY_THROW(TSpecialCar bf("", "", "", "", -1));
}

TEST(TSpecialCar, can_get_speed)
{
  TSpecialCar bf;
  EXPECT_DOUBLE_EQ(bf.GetSpeed(), 0.0);
}
