#include "HAir.h"

#include <gtest.h>

TEST(TAir, can_create_Air)
{
  ASSERT_NO_THROW(TAir bf);
}

TEST(TAir, can_get_speed)
{
  TAir bf;
  EXPECT_DOUBLE_EQ(bf.GetSpeed(), 100.0);
}

TEST(Air, can_get_FAltitude)
{
  TAir bf;
  EXPECT_DOUBLE_EQ(bf.GetFAltitude(), 100.0);
}
