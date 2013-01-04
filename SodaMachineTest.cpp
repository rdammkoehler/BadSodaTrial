#include <gtest/gtest.h>

#include "SodaMachine.h"
#include "Vendor.h"

using namespace Soda;
using namespace ::testing;

class SodaMachineTest : public Test
{
protected:
  void SetUp()
  {
  	sodaMachine = new SodaMachine;
  }
  void TearDown()
  {
  	delete sodaMachine;
  	sodaMachine = NULL;
  }

  SodaMachine* sodaMachine;
};

TEST_F(SodaMachineTest, CanAddInventory)
{
  int position = 0;
  InventoryItem* drPepper = new InventoryItem("DrPepper", 0.75, 10);
  sodaMachine->Add(position, drPepper);
  EXPECT_EQ(*drPepper, *(sodaMachine->Inventory(position)));
}

TEST_F(SodaMachineTest, CanAddManyItemsToInventory)
{
  int cokePosition = 0;
  int drPepperPosition = 1;
  InventoryItem* drPepper = new InventoryItem("DrPepper", 0.75, 10);
  InventoryItem* coke = new InventoryItem("Coke", 0.75, 8);

  sodaMachine->Add(cokePosition, coke);
  sodaMachine->Add(drPepperPosition, drPepper);

  EXPECT_EQ(*drPepper, *(sodaMachine->Inventory(drPepperPosition)));
  EXPECT_EQ(*coke, *(sodaMachine->Inventory(cokePosition)));
}

TEST_F(SodaMachineTest, CanPurchaseAProduct)
{
  int position = 0;
  InventoryItem* drPepper = new InventoryItem("DrPepper", 0.75, 10);
  sodaMachine->Add(position, drPepper);

  InventoryItem* myDrPepper = sodaMachine->Purchase(position, 0.75);
  EXPECT_EQ(*drPepper, *myDrPepper);

  delete myDrPepper;
  myDrPepper = NULL;
}

TEST_F(SodaMachineTest, CanStockTheMachine)
{
	Vendor myVendor;

	sodaMachine->Stock(myVendor);
	EXPECT_EQ(*(sodaMachine->Inventory(0)), *(myVendor.GetInventory()[0]));
	EXPECT_EQ(*(sodaMachine->Inventory(1)), *(myVendor.GetInventory()[1]));
	EXPECT_EQ(*(sodaMachine->Inventory(2)), *(myVendor.GetInventory()[2]));
	EXPECT_EQ(*(sodaMachine->Inventory(3)), *(myVendor.GetInventory()[3]));
	EXPECT_EQ(*(sodaMachine->Inventory(4)), *(myVendor.GetInventory()[4]));
	EXPECT_EQ(*(sodaMachine->Inventory(5)), *(myVendor.GetInventory()[5]));
	EXPECT_EQ(*(sodaMachine->Inventory(6)), *(myVendor.GetInventory()[6]));
}
