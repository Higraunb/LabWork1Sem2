#include "HGround.h"

#include <gtest.h>

TEST(Ground, can_create_Ground)
{
  ASSERT_NO_THROW(Ground bf);
}

TEST(Ground, can_get_speed)
{
  Ground bf;
  EXPECT_DOUBLE_EQ(bf.GetSpeed(), 0.0);
}

TEST(Ground, can_delete_Ground)
{
  Ground bf;
  ASSERT_NO_THROW(bf.~Ground());
}
