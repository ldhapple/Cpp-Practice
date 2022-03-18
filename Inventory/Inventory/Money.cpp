#include "Money.h"

int Money::money = 5000;

int Money::GetMoney() const
{
	return money;
}

void Money::SetMoney(int st_money)
{
	money = st_money;
}

void Money::PlusMoney(int gold)
{
	money += gold;
}