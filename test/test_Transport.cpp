#include <HTransport.h>

#include <gtest.h>

TEST(TTransport, can_create_Ground)
{
  ASSERT_NO_THROW(TTransport bf);
}

TEST(TTransport, can_get_speed)
{
  TTransport bf;
  EXPECT_DOUBLE_EQ(bf.GetSpeed(), 60.0);
}
