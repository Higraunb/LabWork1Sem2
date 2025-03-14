#include "HMultiScrew.h"

#include <gtest.h>

TEST(TMultiScrew, can_create_MultiScrew)
{
  ASSERT_NO_THROW(TMultiScrew bf);
}

TEST(TMultiScrew, cant_create_negative_values)
{
  ASSERT_ANY_THROW(TMultiScrew bf("", "", "", "", -1));
}

TEST(TMultiScrew, can_get_speed)
{
  TMultiScrew bf;
  EXPECT_DOUBLE_EQ(bf.GetSpeed(), 130.0);
}

TEST(TMultiScrew, can_get_FAltitude)
{
  TMultiScrew bf;
  EXPECT_DOUBLE_EQ(bf.GetFAltitude(), 0.0);
}

TEST(TMultiScrew, can_get_Weight)
{
  TMultiScrew bf;
  EXPECT_DOUBLE_EQ(bf.GetWeight(), 2.5);
}

TEST(TMultiScrew, can_get_EngineCapacity)
{
  TMultiScrew bf;
  EXPECT_DOUBLE_EQ(bf.GetEngineCapacity(), 580);
}
