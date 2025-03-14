#include "HSingleRotor.h"

#include <gtest.h>

TEST(TSingleRotor, can_create_SingleRotor)
{
  ASSERT_NO_THROW(TSingleRotor bf);
}

TEST(TSingleRotor, cant_create_negative_values)
{
  ASSERT_ANY_THROW(TSingleRotor bf("", "", "", "", -1));
}

TEST(TSingleRotor, can_get_speed)
{
  TSingleRotor bf;
  EXPECT_DOUBLE_EQ(bf.GetSpeed(), 200.0);
}

TEST(TSingleRotor, can_get_FAltitude)
{
  TSingleRotor bf;
  EXPECT_DOUBLE_EQ(bf.GetFAltitude(), 0.0);
}

TEST(TSingleRotor, can_get_Weight)
{
  TSingleRotor bf;
  EXPECT_DOUBLE_EQ(bf.GetWeight(), 28.5);
}

TEST(TSingleRotor, can_get_EngineCapacity)
{
  TSingleRotor bf;
  EXPECT_DOUBLE_EQ(bf.GetEngineCapacity(), 11400);
}
