#include <iostream>
#include "readstring.h"

void main()
{
	readFile *r = new readFile();

	r->read();

	findWord *f = new findWord();
	f->findword();
	

	system("pause");
}