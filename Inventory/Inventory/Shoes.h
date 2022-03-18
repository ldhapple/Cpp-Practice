#pragma once
#include "Item.h"
//class Item;

class Shoes : public Item
{
private:
	bool canEquip = true;

public:
	Shoes();
	virtual void Equip();
};