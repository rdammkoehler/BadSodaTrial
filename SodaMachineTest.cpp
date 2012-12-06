#include "gtest/gtest.h"
#include "SodaMachine.h"
#include "Product.h"

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
  Product* product = sodaMachine->choose(Product::DietCoke);
  EXPECT_EQ(Product::DietCoke, product->type);
}

TEST_F(SodaMachineTest, ChooseAnotherProduct)
{
  SodaMachine* sodaMachine = new SodaMachine;
  sodaMachine->insertFunds(75);
  Product* product = sodaMachine->choose(Product::Dr_Pepper);
  EXPECT_EQ(Product::Dr_Pepper, product->type);
}

TEST_F(SodaMachineTest, ChooseNothingIfNotPaid)
{
  SodaMachine* sodaMachine = new SodaMachine;
  Product* product = sodaMachine->choose(Product::Dr_Pepper);
  ASSERT_EQ(product->type, Product::NotAProduct);
}

TEST_F(SodaMachineTest, ChooseProductIfPaid)
{
  SodaMachine* sodaMachine = new SodaMachine;
  sodaMachine->insertFunds(75);
  Product* product = sodaMachine->choose(Product::Dr_Pepper);
  EXPECT_EQ(product->type, Product::Dr_Pepper);
}
