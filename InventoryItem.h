#ifndef INVENTORY_ITEM
#define INVENTORY_ITEM

#include <string>

namespace Soda
{
	class InventoryItem
	{
	public:
		InventoryItem(const std::string& type, double price, int count) : Type(type), Price(price), Count(count)
		{
		}

		InventoryItem(const InventoryItem* item) : Type(item->Type), Price(item->Price), Count(item->Count)
		{
		}

		bool operator==(const InventoryItem& other) const
		{
			return Type == other.Type && Count == other.Count && Price == other.Price;
		}

		const std::string Type;
		const double Price;
		const int Count;
	};
}

#endif //INVENTORY_ITEM