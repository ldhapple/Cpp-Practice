#include "Statistics.h"
#include <iostream>

using namespace std;

Statistics::Statistics()
{

}

Statistics* Statistics::GetInstance()
{
	if (stats_instance == nullptr)
	{
		stats_instance = new Statistics();
	}
	return stats_instance;
}

void Statistics::PrintStats()
{
	cout << "���罺��" << endl;
	cout << "hp: " << hp << "(max 520)" << endl;
	cout << "mp: " << mp << "(max 260)" << endl;
	cout << "���ݷ�: " << power << endl;
	cout << "����: " << armor << endl;
	cout << "�̵��ӵ�: " << speed << endl;
}

int Statistics::GetHp() const
{
	return hp;
}

int Statistics::GetMp() const
{
	return mp;
}

int Statistics::GetArmor() const
{
	return armor;
}

int Statistics::GetSpeed() const
{
	return speed;
}

int Statistics::GetPower() const
{
	return power;
}

void Statistics::SetHp(int stats)
{
	hp = stats;
}

void Statistics::SetMp(int stats)
{
	mp = stats;
}

void Statistics::SetArmor(int stats)
{
	armor = stats;
}

void Statistics::SetPower(int stats)
{
	power = stats;
}

void Statistics::SetSpeed(int stats)
{
	speed = stats;
}

Statistics* Statistics::stats_instance = nullptr;