#include "ArmorSuit.h"
#include "Statistics.h"

ArmorSuit::ArmorSuit()
{
	price = 500;
	name = "°©¿Ê";

}

void ArmorSuit::Equip()
{
	if (canEquip == true)
	{
		canEquip == false;
		Statistics::GetInstance()->SetArmor(60);
	}
}

