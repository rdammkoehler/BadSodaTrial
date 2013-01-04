#include "SodaMachine.h"

using namespace Soda;

SodaMachine::SodaMachine()
{
}

SodaMachine::~SodaMachine()
{
}

void SodaMachine::Add(int position, InventoryItem* item)
{
	// MEMORY LEAK ON PURPOSE
	MyInventory[position] = new InventoryItem(item);
}

const InventoryItem* SodaMachine::Inventory(int position) const
{
	return MyInventory.at(position);
}

InventoryItem* SodaMachine::Purchase(int position, double amount)
{
	// MORE MEMORY LEAKS POSSIBLE HERE!
	const InventoryItem* oldItem = Inventory(position);
	return new InventoryItem(oldItem);
}

void SodaMachine::Stock(Vendor& vendor)
{
	for(int i = 0; i < vendor.GetInventory().size(); i++)
	{
		MyInventory[i] = vendor.GetInventory()[i];
	}
}