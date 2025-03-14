#include "HPassenger.h"

#include <gtest.h>

TEST(TPassengerCar, can_create_PassengerCar)
{
  ASSERT_NO_THROW(TPassengerCar bf);
}

TEST(TPassengerCar, cant_create_negative_values)
{
  ASSERT_ANY_THROW(TPassengerCar bf("", "", "", "", -1));
}

TEST(TPassengerCar, can_get_speed)
{
  TPassengerCar bf;
  EXPECT_DOUBLE_EQ(bf.GetSpeed(), 0.0);
}
