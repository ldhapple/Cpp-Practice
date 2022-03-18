#pragma once
#include <string>

#define MAX_SIZE 100

using namespace std;

class MyString
{
private:

protected:
	int count;
	string *str = new string[MAX_SIZE];
	string findstr;
	
public:
	void enterString();
	void enterFindString();
	~MyString();
};

class FindString:public MyString
{
private:
	int index;
	int size;

public:
	void findStr();
	void print_findStr();

};