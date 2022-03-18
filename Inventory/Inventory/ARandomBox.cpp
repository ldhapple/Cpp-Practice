#include "ARandomBox.h"
#include "HpPotion.h"
#include "Shoes.h"
#include "Spell.h"
#include "Sword.h"
#include "Inventory.h"
#include <cstdlib>

void ARandomBox::Open()
{
	cout << "�������ڸ� �����մϴ�." << endl;
	randomNum = rand() % 20; //0~19
	Inventory *inven = Inventory::GetInstance();

	if (randomNum >= 0 && randomNum <= 3) // 20% Ȯ��
	{
		Shoes *shoes = new Shoes();
		inven->AddItem(shoes);

		cout << "�Ź��� ��÷�Ǿ����ϴ�." << endl;
		delete shoes;
	}

	else if (randomNum == 4) // 5% Ȯ��
	{
		Spell *spell = new Spell();
		inven->AddItem(spell);

		cout << "�����մϴ�! �ֹ���(1��)�� ��÷�Ǿ����ϴ�." << endl;
		delete spell;
	}

	else if (randomNum >= 5 && randomNum <= 17) // 65% Ȯ��
	{
		HpPotion *hpPotion = new HpPotion();
		inven->AddItem(hpPotion);

		cout << "Hp������ ��÷�Ǿ����ϴ�." << endl;
		delete hpPotion;
	}

	else if (randomNum > 17) // 10% Ȯ��
	{
		Sword *sword = new Sword();
		inven->AddItem(sword);

		cout << "¦¦¦! ��(2��)�� ��÷�Ǿ����ϴ�." << endl;
		delete sword;
	}
}