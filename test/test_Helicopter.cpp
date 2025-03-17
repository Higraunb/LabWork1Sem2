#include "HHelicopter.h"

#include <gtest.h>

TEST(THelicopter, can_create_Helicopter)
{
  ASSERT_NO_THROW(THelicopter bf);
}

TEST(THelicopter, cant_create_negative_values)
{
  ASSERT_ANY_THROW(THelicopter bf("", "", "", "", -1));
}

TEST(THelicopter, can_get_speed)
{
  THelicopter bf;
  EXPECT_DOUBLE_EQ(bf.GetSpeed(), 100.0);
}

TEST(THelicopter, can_get_FAltitude)
{
  THelicopter bf;
  EXPECT_DOUBLE_EQ(bf.GetFAltitude(), 100.0);
}
