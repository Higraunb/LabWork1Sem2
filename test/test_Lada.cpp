#include "HLada.h"

#include <gtest.h>

TEST(TLada, can_create_Lada)
{
  ASSERT_NO_THROW(TLada bf);
}

TEST(TLada, cant_create_negative_values)
{
  ASSERT_ANY_THROW(TLada bf("", "", "", "", -1));
}

TEST(TLada, can_get_speed)
{
  TLada bf;
  EXPECT_DOUBLE_EQ(bf.GetSpeed(), 0.0);
}

TEST(TLada, can_get_GetCountOfPeople)
{
  TLada bf;
  EXPECT_EQ(bf.GetCountOfPeople(), 4);
}
