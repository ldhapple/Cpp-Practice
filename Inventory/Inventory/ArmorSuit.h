#pragma once
#include "Item.h"
//class Item;

class ArmorSuit : public Item
{
private:
	bool canEquip = true;

public:
	ArmorSuit();
	virtual void Equip();
};