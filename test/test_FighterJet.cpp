#include "HFighterJet.h"

#include <gtest.h>

TEST(TFighterJet, can_create_FighterJet)
{
  ASSERT_NO_THROW(TFighterJet bf);
}

TEST(TFighterJet, cant_create_negative_values)
{
  ASSERT_ANY_THROW(TFighterJet bf("", "", "", "", -1));
}

TEST(TFighterJet, can_get_speed)
{
  TFighterJet bf;
  EXPECT_DOUBLE_EQ(bf.GetSpeed(), 2500.0);
}

TEST(TFighterJet, can_get_FAltitude)
{
  TFighterJet bf;
  EXPECT_DOUBLE_EQ(bf.GetFAltitude(), 0.0);
}

TEST(TFighterJet, can_get_Weight)
{
  TFighterJet bf;
  EXPECT_DOUBLE_EQ(bf.GetWeight(), 26.5);
}

TEST(TFighterJet, can_get_EngineCapacity)
{
  TFighterJet bf;
  EXPECT_DOUBLE_EQ(bf.GetEngineCapacity(), 15000);
}
