#include "MyString.h"
#include <string>
#include <iostream>

#define MAX_SIZE 10

using namespace std;

void MyString::findString()
{
	string str[MAX_SIZE];
	cout << "���ڿ��� �Է��ϼ���(����2�� = �����ܰ�)" << endl;
	count = 0;

	for (int i = 0; i < MAX_SIZE; i++)
	{
		getline(cin, str[i], '\n');
		count++;
		if (str[i].empty())
			break;
	}
		
	string findstr;
	cout << "�˻��� ���ڿ��� �Է��ϼ���" << endl;
	getline(cin, findstr, '\n');
	size = findstr.size();
	

	for (int i = 0; i < count; i++)
	{
		index = str[i].find(findstr);
		
		if (index != -1)
		{
			str[i].insert(index, "--");
			str[i].insert(index + size +2, "--"); // 2�� --�� ũ��
		}
		cout << str[i] << endl;

	}
		


}
