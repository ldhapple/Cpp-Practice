#include "Test.h"
#include <iostream>

using namespace std;

void main()
{
	Test *ins1 = Test::GetInstancePtr();
	ins1->AddValue(5);
	cout << "ins1 add 5, total=> " << ins1->GetTotal() << endl;

	Test *ins2 = Test::GetInstancePtr();
	ins2->AddValue(5);
	cout << "ins2 add 5, total=> " << ins2->GetTotal() << endl;

	Test *ins3 = Test::GetInstancePtr();
	ins3->AddValue(5);
	cout << "ins3 add 5, total=> " << ins3->GetTotal() << endl;

	system("pause");
}