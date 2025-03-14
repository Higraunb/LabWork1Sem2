#include "HGround.h"

#include <gtest.h>

TEST(TGround, can_create_Ground)
{
  ASSERT_NO_THROW(TGround bf);
}

TEST(TGround, can_get_speed)
{
  TGround bf;
  EXPECT_DOUBLE_EQ(bf.GetSpeed(), 0.0);
}
