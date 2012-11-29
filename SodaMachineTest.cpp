#include "gtest/gtest.h"
#include "SodaMachine.h"

class SodaMachineTest : public ::testing::Test
{
public:
  void SetUp()
  {
  }
  void TearDown()
  {
  }
};

TEST_F(SodaMachineTest, ConstructorTest)
{
  SodaMachine* sodaMachine = new SodaMachine;
  ASSERT_NE(sodaMachine, (SodaMachine*)NULL);
}

TEST_F(SodaMachineTest, ChooseProduct)
{
  SodaMachine* sodaMachine = new SodaMachine;
  sodaMachine->insertFunds(75);
  std::string product = sodaMachine->choose("Diet Coke");
  EXPECT_EQ("Diet Coke", product);
}

TEST_F(SodaMachineTest, ChooseAnotherProduct)
{
  SodaMachine* sodaMachine = new SodaMachine;
  sodaMachine->insertFunds(75);
  std::string product = sodaMachine->choose("Dr Pepper");
  EXPECT_EQ("Dr Pepper", product);
}

TEST_F(SodaMachineTest, ChooseNothingIfNotPaid)
{
  SodaMachine* sodaMachine = new SodaMachine;
  std::string product = sodaMachine->choose("Dr Pepper");
  ASSERT_EQ(product, "");
}

TEST_F(SodaMachineTest, ChooseProductIfPaid)
{
  SodaMachine* sodaMachine = new SodaMachine;
  sodaMachine->insertFunds(75);
  std::string product = sodaMachine->choose("Dr Pepper");
  EXPECT_EQ(product, "Dr Pepper");
}
