#include "HUAZ.h"

#include <gtest.h>

TEST(TUAZ, can_create_UAZ)
{
  ASSERT_NO_THROW(TUAZ bf);
}

TEST(TUAZ, cant_create_negative_values)
{
  ASSERT_ANY_THROW(TUAZ bf("", "", "", "", -1));
}

TEST(TUAZ, can_get_speed)
{
  TUAZ bf;
  EXPECT_DOUBLE_EQ(bf.GetSpeed(), 0.0);
}

TEST(TUAZ, can_get_GetCountOfPeople)
{
  TUAZ bf;
  EXPECT_EQ(bf.GetCountOfPeople(), 8);
}
