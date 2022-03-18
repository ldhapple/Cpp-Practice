#include "Test.h"
#include <iostream>

void Test::AddValue(int value)
{
	total += value;
}

int Test::GetTotal()
{
	return total;
}