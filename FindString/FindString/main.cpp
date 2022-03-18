#include "MyString.h"
#include <iostream>



int main()
{
	MyString *Mstring = new MyString();
	Mstring->findString();


	delete Mstring;

	system("pause");
}