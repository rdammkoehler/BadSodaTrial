#include "gtest/gtest.h"
#include "SodaMachine.h"

TEST(SodaMachine, ConstructorTest)
{
  SodaMachine* sodaMachine = new SodaMachine;
  ASSERT_NE(sodaMachine, (SodaMachine*)NULL);
}

TEST(SodaMachine, ChooseProduct)
{
  SodaMachine* sodaMachine = new SodaMachine;
  std::string product = sodaMachine->choose("Diet Coke");
  EXPECT_EQ("Diet Coke", product);
}
