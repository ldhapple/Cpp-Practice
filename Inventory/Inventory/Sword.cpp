#include "Sword.h"
#include "Statistics.h"

Sword::Sword()
{
	price = 700;
	name = "��";

}

void Sword::Equip()
{
	if (canEquip == true)
	{
		canEquip == false;
		Statistics::GetInstance()->SetPower(100);
	}
}

