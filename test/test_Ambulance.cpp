#include "HAmbulance.h"

#include <gtest.h>

TEST(TAmbulance, can_create_TAmbulance)
{
  ASSERT_NO_THROW(TAmbulance bf);
}

TEST(TAmbulance, cant_create_negative_values)
{
  ASSERT_ANY_THROW(TAmbulance bf("", "", "", "", -1));
}

TEST(TAmbulance, can_get_speed)
{
  TAmbulance bf;
  EXPECT_DOUBLE_EQ(bf.GetSpeed(), 0.0);
}

TEST(TAmbulance, can_get_GetCountOfPeople)
{
  TAmbulance bf;
  EXPECT_EQ(bf.GetCountOfPeople(), 6);
}
