#ifndef VENDOR
#define VENDOR

#include <map>

#include "InventoryItem.h"

namespace Soda
{
	typedef std::map<int, Soda::InventoryItem*> Inventory;

	class Vendor
	{
	public:
		Vendor();
		virtual ~Vendor();
		Inventory GetInventory() const;
	};
}

#endif //VENDOR
