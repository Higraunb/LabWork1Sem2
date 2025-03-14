#include "HFireTruck.h"

#include <gtest.h>

TEST(TFireTruck, can_create_FireTruck)
{
  ASSERT_NO_THROW(TFireTruck bf);
}

TEST(TFireTruck, cant_create_negative_values)
{
  ASSERT_ANY_THROW(TFireTruck bf("", "", "", "", -1));
}

TEST(TFireTruck, can_get_speed)
{
  TFireTruck bf;
  EXPECT_DOUBLE_EQ(bf.GetSpeed(), 0.0);
}

TEST(TFireTruck, can_get_GetCountOfPeople)
{
  TFireTruck bf;
  EXPECT_EQ(bf.GetCountOfPeople(), 8);
}