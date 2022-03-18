#pragma once

class Statistics
{
private:
	Statistics();
	static Statistics* stats_instance;

	int hp = 520;
	int mp = 260;
	int power = 65;
	int armor = 30;
	int speed = 340;

public:
	void PrintStats();
	static Statistics* GetInstance();
	int GetHp() const;
	int GetMp() const;
	int GetPower() const;
	int GetArmor() const;
	int GetSpeed() const;
	void SetHp(int stats);
	void SetMp(int stats);
	void SetPower(int stats);
	void SetArmor(int stats);
	void SetSpeed(int stats);
};

