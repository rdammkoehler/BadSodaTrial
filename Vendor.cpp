#include "Vendor.h"

using namespace Soda;

Vendor::Vendor()
{
}

Vendor::~Vendor()
{
}

Inventory Vendor::GetInventory() const
{
	Inventory temp;
	temp[0] = new InventoryItem("Coke", 0.75, 50);
	temp[1] = new InventoryItem("Diet Coke", 0.75, 50);
	temp[2] = new InventoryItem("Dr Pepper", 0.75, 50);
	temp[3] = new InventoryItem("Sprite", 0.75, 50);
	temp[4] = new InventoryItem("Dr Thunder", 0.75, 50);
	temp[5] = new InventoryItem("Diet Dr Pepper", 0.75, 50);
	temp[6] = new InventoryItem("Pepsi", 0.75, 50);
	temp[7] = new InventoryItem("Diet Pepsi", 0.75, 50);
	return temp;
}