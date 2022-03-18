#include "Spell.h"
#include "Statistics.h"
#include <cstdlib>

Spell::Spell()
{
	price = 1200;
	name = "ÁÖ¹®¼­";

}

void Spell::Use()
{
	Statistics::GetInstance()->SetArmor(rand() % 120);
	Statistics::GetInstance()->SetPower(rand() % 150);
	Statistics::GetInstance()->SetSpeed(rand() % 500);
}

