#pragma once
#include "Singleton.h"

class Test : public Singleton<Test>
{
private:
	int total = 0;

public:
	void AddValue(int value);
	int GetTotal();
};