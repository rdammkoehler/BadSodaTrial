#ifndef SODA_MACHINE
#define SODA_MACHINE

#include <string>
#include <map>

#include "InventoryItem.h"
#include "Vendor.h"

namespace Soda
{
	class SodaMachine
	{
	public:
		SodaMachine();
		virtual ~SodaMachine();
		virtual void Add(int position, InventoryItem* item);
		virtual const InventoryItem* Inventory(int position) const;
		virtual InventoryItem* Purchase(int position, double amount);
		virtual void Stock(Vendor& vendor);
	private:
		std::map<int, InventoryItem*> MyInventory;
	};
}
#endif //SODA_MACHINE