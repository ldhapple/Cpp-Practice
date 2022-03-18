#include "ARandomBox.h"
#include "HpPotion.h"
#include "Shoes.h"
#include "Spell.h"
#include "Sword.h"
#include "Inventory.h"
#include <cstdlib>

void ARandomBox::Open()
{
	cout << "·£´ý»óÀÚ¸¦ ¿ÀÇÂÇÕ´Ï´Ù." << endl;
	randomNum = rand() % 20; //0~19
	Inventory *inven = Inventory::GetInstance();

	if (randomNum >= 0 && randomNum <= 3) // 20% È®·ü
	{
		Shoes *shoes = new Shoes();
		inven->AddItem(shoes);

		cout << "½Å¹ßÀÌ ´çÃ·µÇ¾ú½À´Ï´Ù." << endl;
		delete shoes;
	}

	else if (randomNum == 4) // 5% È®·ü
	{
		Spell *spell = new Spell();
		inven->AddItem(spell);

		cout << "ÃàÇÏÇÕ´Ï´Ù! ÁÖ¹®¼­(1µî)°¡ ´çÃ·µÇ¾ú½À´Ï´Ù." << endl;
		delete spell;
	}

	else if (randomNum >= 5 && randomNum <= 17) // 65% È®·ü
	{
		HpPotion *hpPotion = new HpPotion();
		inven->AddItem(hpPotion);

		cout << "HpÆ÷¼ÇÀÌ ´çÃ·µÇ¾ú½À´Ï´Ù." << endl;
		delete hpPotion;
	}

	else if (randomNum > 17) // 10% È®·ü
	{
		Sword *sword = new Sword();
		inven->AddItem(sword);

		cout << "Â¦Â¦Â¦! °Ë(2µî)ÀÌ ´çÃ·µÇ¾ú½À´Ï´Ù." << endl;
		delete sword;
	}
}