#include "findstring.h"
#include <iostream>

int main()
{
	FindString *find = new FindString();
	find->findStr();
	find->print_findStr();


	delete find;

	system("pause");
}