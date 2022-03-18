#include "findstring.h"
#include <iostream>

MyString::~MyString()
{
	delete str;
}

void MyString::enterString()
{
	cout << "문자열을 입력하세요(엔터2번 = 다음단계)" << endl;
	count = 0;

	for (int i = 0; i < MAX_SIZE; i++)
	{
		getline(cin, str[i], '\n');
		count++;
		str[i] = str[i];
		if (str[i].empty())
			break;
	}
}

void MyString::enterFindString()
{
	cout << "검색할 문자열을 입력하세요" << endl;
	getline(cin, findstr, '\n');
}

void FindString::findStr()
{
	enterString();
	enterFindString();
	size = findstr.size();

	for (int i = 0; i < count; i++)
	{
		index = str[i].find(findstr);

		if (index != -1)
		{
			do
			{
				str[i].insert(index, "--");
				str[i].insert(index + size + 2, "--");
				index = str[i].find(findstr, index + size + 1);
			} while (index != -1);
		}
	}
}

void FindString::print_findStr()
{
	for (int i = 0; i < count; i++)
	{
		cout << str[i] << endl;
	}
}
