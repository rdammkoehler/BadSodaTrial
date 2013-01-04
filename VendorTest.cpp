#include <gtest/gtest.h>
#include <algorithm>

#include "Vendor.h"

using namespace Soda;

namespace
{
	void DeleteItem(Inventory::value_type item)
	{
		delete item.second;
		item.second = NULL;
	}

	bool AreEqual(Inventory::value_type one, Inventory::value_type two)
	{
		return one.first == two.first
				&& *(one.second) == *(two.second);
	}
}

TEST(VendorTest, VendorHasInventory)
{
	Vendor myVendor;
	Inventory expected;

	expected[0] = new InventoryItem("Coke", 0.75, 50);
	expected[1] = new InventoryItem("Diet Coke", 0.75, 50);
	expected[2] = new InventoryItem("Dr Pepper", 0.75, 50);
	expected[3] = new InventoryItem("Sprite", 0.75, 50);
	expected[4] = new InventoryItem("Dr Thunder", 0.75, 50);
	expected[5] = new InventoryItem("Diet Dr Pepper", 0.75, 50);
	expected[6] = new InventoryItem("Pepsi", 0.75, 50);
	expected[7] = new InventoryItem("Diet Pepsi", 0.75, 50);

	Inventory actual = myVendor.GetInventory();

	// Ugly test that tests too much
	EXPECT_EQ(expected.size(), actual.size());
	EXPECT_TRUE(std::equal(expected.begin(), expected.end(), actual.begin(), AreEqual));

	std::for_each(expected.begin(), expected.end(), DeleteItem);
	std::for_each(actual.begin(), actual.end(), DeleteItem);
}