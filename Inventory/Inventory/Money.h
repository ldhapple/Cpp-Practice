#pragma once

class Money
{
private:
	static int money;

public:
	int GetMoney() const;
	void SetMoney(int st_money);
	void PlusMoney(int gold);
};
