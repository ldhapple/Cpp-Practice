#include "BRandomBox.h"
#include "Money.h"
#include <cstdlib>
#include <iostream>

using namespace std;

void BRandomBox::Open()
{
	cout << "�������ڸ� �����մϴ�." << endl;
	randomNum = rand() % 20; //0~19

	Money *money = new Money();
	if (randomNum >= 0 && randomNum <= 3) // 20% Ȯ��
	{	
		gold = rand() % 501 + 500; //500~1000
		money->PlusMoney(gold);

		cout << gold << " gold ��÷�Ǿ����ϴ�." << endl;

	}

	else if (randomNum == 4) // 5% Ȯ��
	{
		
		gold = rand() % 7501 + 2500; // 2500~ 10000
		money->PlusMoney(gold);
		cout << gold << " gold ��÷�Ǿ����ϴ�." << endl;

	}

	else if (randomNum >= 5 && randomNum <= 17) // 65% Ȯ��
	{
	
		gold = rand() % 501; // 0~ 500
		money->PlusMoney(gold);
		cout << gold << " gold ��÷�Ǿ����ϴ�." << endl;

	}

	else if (randomNum > 17) // 10% Ȯ��
	{
		gold = rand() % 2001 + 1000; // 1000~3000
		money->PlusMoney(gold);
		cout << gold << " gold ��÷�Ǿ����ϴ�." << endl;
	}
	delete money;
}