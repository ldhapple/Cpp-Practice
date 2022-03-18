#pragma once
#include "RandomBox.h"
class RandomBox;

class BRandomBox : public RandomBox
{
private:
	int gold;
public:
	virtual void Open();
};