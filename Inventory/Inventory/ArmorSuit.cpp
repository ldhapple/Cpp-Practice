#include "ArmorSuit.h"
#include "Statistics.h"

ArmorSuit::ArmorSuit()
{
	price = 500;
	name = "����";

}

void ArmorSuit::Equip()
{
	if (canEquip == true)
	{
		canEquip == false;
		Statistics::GetInstance()->SetArmor(60);
	}
}

