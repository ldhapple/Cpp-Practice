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
	cout << "-------�κ��丮--------" << endl;

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
	if (itemlist[itemNum].GetName() == "Hp����")
	{
		HpPotion hpPotion;
		hpPotion.Use();
	}

	if (itemlist[itemNum].GetName() == "Mp����")
	{
		MpPotion mpPotion;
		mpPotion.Use();
	}

	if (itemlist[itemNum].GetName() == "�ֹ���")
	{
		Spell spell;
		spell.Use();
	}
}

void Inventory::EquipItem(int itemNum)
{
	if (itemlist[itemNum].GetName() == "�Ź�")
	{
		Shoes shoes;
		shoes.Equip();
	}

	if (itemlist[itemNum].GetName() == "��")
	{
		Sword sword;
		sword.Equip();
	}

	if (itemlist[itemNum].GetName() == "����")
	{
		ArmorSuit armor;
		armor.Equip();
	}
}

Inventory::~Inventory()
{

}

Inventory* Inventory::inven_instance = nullptr;
