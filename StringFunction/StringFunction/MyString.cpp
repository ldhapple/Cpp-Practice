#include "MyString.h"
#include <iostream>
using namespace std;

MyString::~MyString()
{
	delete[]result;
}

void MyString::Initresult()
{
	for (int i = 0; i < 100; i++)
	{
		result[i] = 0;
	}
}

int MyString::MyCompare(const char* scr)
{
	
	cout << "기존문장 ===> " << com1 << endl;
	cout << "비교문장 ===> " << scr << endl;
	/*while (com1[i] != '0')
	{
		if (com1[i] != scr[i])
		{
			break;
		}
		else i++;
	}*/
	for (i = 0; com1[i] != NULL; i++)
	{
		if (com1[i] == scr[i] && com1[i+1] == NULL)
		{
			cout << "기존문장과 비교문장이 같다. ";
			return 0;
		}
		else if (com1[i] < scr[i])
		{
			cout <<  "기존문장이 비교문장보다 사전순으로 앞이다. ";
			return -1;
		}
		else if (com1[i] > scr[i])
		{
			cout << "기존문장보다 비교문장이 사전순으로 앞이다. ";
			return 1;
		}
	}

	

}

void MyString::MyAppend(const char* scr)
{

	cout << "기존문장 ===> " << str << endl;

	Initresult();


	for (i = 0; str[i] != NULL; i++)
	{
		result[i] = str[i];
		if (str[i + 1] == NULL)
		{
			size = i + 1;
		}
	}

	for (i = 0; scr[i] != NULL; i++)
	{
		result[size + i] = scr[i];
	}

	cout << "Append 함수실행후 ===>";
	for (i = 0; result[i] != NULL; i++)
	{
		cout << result[i];
	}

	cout << endl << endl;

	//printf("함수실행후 ===> %s\n\n", str);
}

void MyString::MyInsert(int a, const char* scr)
{
	cout << "기존문장 ===> "<< str <<endl;

	Initresult();

	for (i = 0; str[i] != NULL; i++)
	{
		result[i] = str[i];
	}

	for (i = 0; scr[i] != NULL; i++)
	{
		result[i+a] = scr[i];
	}
	cout << "Insert 함수실행후 ==>";
	for (i = 0; result[i] != NULL; i++)
	{
		cout << result[i];
	}
	//printf("함수실행후 ==> %s\n", result);
	
	cout << endl << endl;
	
}

void MyString::MySubstr(int a, int b)
{
	cout << "기존문장 ===> " << str << endl;

	/*printf("함수실행후 ===>");
	for (i=0; i <= b; i++)
	{
		printf("%c",str[i + a]);
	}
	printf("\n\n");*/

	Initresult();

	cout << "Substr 함수실행후 ===>";
	for (i = 0; i <= b; i++)
	{
		result[i] = str[i + a];
		cout << result[i];
	}

	cout << endl << endl;

}

void MyString::MyErase(int a, int b)
{
	cout << "기존문장 ===> " << str << endl;

	Initresult();

	for (i = 0; str[i] != NULL; i++)
	{
		result[i] = str[i];
	}
	
	cout << "Erase 함수실행후 ===> ";

	for (i = a; i < a+b; i++)
	{
		result[i] = 'n';
	}

	for (i = 0; result[i] != NULL; i++)
	{
		if (result[i] != 'n')
		{
			cout << result[i];
		}
	}
	cout << endl;
	
}