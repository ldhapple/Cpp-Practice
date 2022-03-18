#include "Shoes.h"
#include "Statistics.h"

Shoes::Shoes()
{
	price = 300;
	name = "½Å¹ß";

}

void Shoes::Equip()
{
	if (canEquip == true)
	{
		canEquip == false;
		Statistics::GetInstance()->SetSpeed(400);
	}
}