#include "Shop.h"
#include "Inventory.h"
#include "Money.h"
#include <iostream>
#include "HpPotion.h"
#include "Sword.h"
#include "Shoes.h"
#include "MpPotion.h"
#include "ArmorSuit.h"
#include "Spell.h"
#include "Item.h"


using namespace std;

void Shop::Open()
{
	int num;
	cout << "---------����-----------" << endl;
	cout << "1. ���� 2. �Ǹ�" << endl;
	cin >> num;

	if (num == 1)
	{
		Sale();
	}
	else if (num == 2)
	{
		Sell();
	}
}

void Shop::Sale()
{
	cout << "1. ��" << endl;
	cout << "2. HP����" << endl;
	cout << "3. �Ź�" << endl;
	cout << "4. ����" << endl;
	cout << "5. MP����" << endl;
	cout << "6. �ֹ���" << endl;
	
	int purchaseNum;

	cin >> purchaseNum;
	Purchase(purchaseNum);
}

void Shop::Purchase(int num)
{
	Money *money = new Money();
	Sword* sword = new Sword();
	HpPotion *hpPotion = new HpPotion();
	Shoes *shoes = new Shoes();
	ArmorSuit *armorSuit = new ArmorSuit();
	MpPotion *mpPotion = new MpPotion();
	Spell *spell = new Spell();

	switch (num)
	{
	case 1:
		
		if (money->GetMoney() >= sword->GetPrice())
		{
			
			Inventory::GetInstance()->AddItem(sword);
			money->SetMoney(money->GetMoney() - sword->GetPrice());
		}
		break;

	case 2:
		
		if (money->GetMoney() >= hpPotion->GetPrice())
		{
			
			Inventory::GetInstance()->AddItem(hpPotion);
			money->SetMoney(money->GetMoney() - hpPotion->GetPrice());
		}
		break;

	case 3:
		
		if (money->GetMoney() >= shoes->GetPrice())
		{
			Inventory::GetInstance()->AddItem(shoes);
			money->SetMoney(money->GetMoney() - shoes->GetPrice());
		}
		break;

	case 4:
		
		if (money->GetMoney() >= armorSuit->GetPrice())
		{
			Inventory::GetInstance()->AddItem(armorSuit);
			money->SetMoney(money->GetMoney() - armorSuit->GetPrice());
		}
		break;

	case 5:
		
		if (money->GetMoney() >= mpPotion->GetPrice())
		{
			Inventory::GetInstance()->AddItem(mpPotion);
			money->SetMoney(money->GetMoney() - mpPotion->GetPrice());
		}
		break;

	case 6:
		
		if (money->GetMoney() >= spell->GetPrice())
		{
			Inventory::GetInstance()->AddItem(spell);
			money->SetMoney(money->GetMoney() - spell->GetPrice());
		}
		break;
	}
	delete money;
}

void Shop::Sell()
{
	int itemNum;

	cout << "�Ȱ� ���� �������� �����ϼ���" << endl;
	cin >> itemNum;
	
	Inventory::GetInstance()->DeleteItem(itemNum);
}
