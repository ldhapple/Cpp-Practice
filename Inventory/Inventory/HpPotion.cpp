#include "HpPotion.h"
#include "Statistics.h"


HpPotion::HpPotion()
{
	price = 100;
	name = "Hp����";
}

void HpPotion::Use()
{
	if (Statistics::GetInstance()->GetHp() < 470)
	{
		Statistics::GetInstance()->SetHp(Statistics::GetInstance()->GetHp() + 50);
	}
}

