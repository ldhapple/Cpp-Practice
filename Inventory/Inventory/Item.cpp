#include "Item.h"
#include "Statistics.h"

void Item::Use()
{

}

void Item::Equip()
{
}

const string& Item::GetName() const
{
	return name;
}

int Item::GetPrice() const
{
	return price;
}

Item::~Item()
{

}
