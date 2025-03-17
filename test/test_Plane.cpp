#include "HPlane.h"

#include <gtest.h>

TEST(TPlane, can_create_Plane)
{
  ASSERT_NO_THROW(TPlane bf);
}

TEST(TPlane, cant_create_negative_values)
{
  ASSERT_ANY_THROW(TPlane bf("", "", "", "", -1));
}

TEST(TPlane, can_get_speed)
{
  TPlane bf;
  EXPECT_DOUBLE_EQ(bf.GetSpeed(), 100.0);
}
