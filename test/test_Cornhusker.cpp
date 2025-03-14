#include "HCornhusker.h"

#include <gtest.h>

TEST(TCornhusker, can_create_Cornhusker)
{
  ASSERT_NO_THROW(TCornhusker bf);
}

TEST(TCornhusker, cant_create_negative_values)
{
  ASSERT_ANY_THROW(TCornhusker bf("", "", "", "", -1));
}

TEST(TCornhusker, can_get_speed)
{
  TCornhusker bf;
  EXPECT_DOUBLE_EQ(bf.GetSpeed(), 130.0);
}

TEST(TCornhusker, can_get_FAltitude)
{
  TCornhusker bf;
  EXPECT_DOUBLE_EQ(bf.GetFAltitude(), 0.0);
}

TEST(TCornhusker, can_get_Weight)
{
  TCornhusker bf;
  EXPECT_DOUBLE_EQ(bf.GetWeight(), 3.4);
}

TEST(TCornhusker, can_get_EngineCapacity)
{
  TCornhusker bf;
  EXPECT_DOUBLE_EQ(bf.GetEngineCapacity(), 1000);
}