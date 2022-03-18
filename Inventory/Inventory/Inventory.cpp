#include "Inventory.h"
#include "Money.h"
#include "Item.h"
#include "Sword.h"
#include "HpPotion.h"
#include "MpPotion.h"
#include "Spell.h"
#include "Shoes.h"
#include "ArmorSuit.h"

Inventory::Inventory()
{

}

Inventory* Inventory::GetInstance()
{
	if (inven_instance == nullptr)
	{
		inven_instance = new Inventory();
	}
	return inven_instance;
}

void Inventory::AddItem(Item *item)
{
	itemlist.push_back(*item);
}

void Inventory::DeleteItem(int itemNum)
{
	itemlist.erase(itemlist.begin() + itemNum);
}

void Inventory::PrintInventory()
{
	cout << "-------인벤토리--------" << endl;

	for (int i = 0; i < itemlist.size(); i++)
	{
		cout << itemlist[i].GetName() << endl;
	}

	Money *gold = new Money();
	cout << "Gold= " << gold->GetMoney() << endl;
	delete gold;
}

void Inventory::UseItem(int itemNum)
{
	if (itemlist[itemNum].GetName() == "Hp포션")
	{
		HpPotion hpPotion;
		hpPotion.Use();
	}

	if (itemlist[itemNum].GetName() == "Mp포션")
	{
		MpPotion mpPotion;
		mpPotion.Use();
	}

	if (itemlist[itemNum].GetName() == "주문서")
	{
		Spell spell;
		spell.Use();
	}
}

void Inventory::EquipItem(int itemNum)
{
	if (itemlist[itemNum].GetName() == "신발")
	{
		Shoes shoes;
		shoes.Equip();
	}

	if (itemlist[itemNum].GetName() == "검")
	{
		Sword sword;
		sword.Equip();
	}

	if (itemlist[itemNum].GetName() == "갑옷")
	{
		ArmorSuit armor;
		armor.Equip();
	}
}

Inventory::~Inventory()
{

}

Inventory* Inventory::inven_instance = nullptr;
