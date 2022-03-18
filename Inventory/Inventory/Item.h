#pragma once
#include <string>

using namespace std;

class Item
{

protected:
	int price;
	string name;

public:
	virtual void Use();
	virtual void Equip();
	const string& GetName() const;
	int GetPrice() const;
	virtual ~Item();
};