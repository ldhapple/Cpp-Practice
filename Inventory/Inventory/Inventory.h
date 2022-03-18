#pragma once
#include <vector>
#include <iostream>
using namespace std;

class Item;


class Inventory
{
private:
	vector<Item> itemlist;
	Inventory();
	static Inventory* inven_instance;

public:
	static Inventory* GetInstance();
	void AddItem(Item *item);
	void DeleteItem(int itemNum);
	void PrintInventory();
	void UseItem(int itemNum);
	void EquipItem(int itemNum);
	virtual ~Inventory();
};


