#include "MyString.h"
#include <iostream>
using namespace std;

void main()
{
	MyString* s = new MyString();
	
	int b = s->MyCompare("Banana");
	cout << "--> ���ϰ� " << b << endl << endl;
	
	int p = s->MyCompare("Apple");
	cout << "--> ���ϰ� " << p << endl << endl;

	int o = s->MyCompare("AoA");
	cout << "--> ���ϰ� " << o << endl << endl;

	s->MyAppend(" Hello");
	s->MyInsert(2, "want");
	s->MySubstr(2, 4);
	s->MyErase(2, 5);
	
	delete s;

	system("pause");
}