#pragma once
#include "Item.h"
//class Item;

class Sword : public Item
{
private:
	bool canEquip = true;

public:
	Sword();
	virtual void Equip();
};