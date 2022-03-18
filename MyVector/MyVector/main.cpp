#include <iostream>
#include "myvector.h"
#include <string>

using namespace std;


void main()
{
	MyVector<string> strVec;
	cout << "-string vector-" << endl;

	strVec.MyPush_Back("hi");
	strVec.MyPush_Back("bye");
	strVec.MyPush_Back("C++");
	strVec.MyPush_Back("zz");
	strVec.MyPush_Back("hh");

	for (int i = 0; i < strVec.MySize(); i++)
	{
		cout << strVec[i] << endl;
	}
	
	cout << "---pop_back()---" << endl;
	strVec.MyPop_Back();

	
	for (int i = 0; i < strVec.MySize(); i++)
	{
		cout << strVec[i] << endl;
	}

	cout << "capacity = " <<  strVec.MyCapacity() << endl;
	cout << "empty = " << strVec.MyEmpty() << endl;
	cout << "size = " << strVec.MySize() << endl << endl << "-int vector-" << endl;
	
	MyVector<int> nVec;
	nVec.MyPush_Back(1);
	nVec.MyPush_Back(2);
	nVec.MyPush_Back(3);
	nVec.MyPush_Back(4);
	
	for (int i = 0; i < nVec.MySize(); i++)
	{
		cout << nVec[i] << endl;
	}

	cout << "front=> " << nVec.front() << endl;
	cout << "back=> " << nVec.back() << endl;

	nVec.MyClear();
	cout << "clear ÈÄ size = " << nVec.MySize() << " capacity = " << nVec.MyCapacity() << endl;
	

	cout << endl << "-char vector-" << endl;

	MyVector<char> cVec;
	cout << "assign(3,a) => ";
	cVec.MyAssign(3, 'a');

	for (int i = 0; i < cVec.MySize(); i++)
	{
		cout << cVec[i];
	}

	system("pause");
}