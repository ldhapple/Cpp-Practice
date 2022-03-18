#include <iostream>
#include "read_find.h"

int main()
{
	
	printStr *printer = new printStr();
	printer->print_findword();

	delete printer;
	system("pause");
}