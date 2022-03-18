#pragma once

class MyString{
private:
	const char* str = "I love C++";
	const char* com1 = "Apple";
	
	char* result = new char[100];
	
	
	int i,size;
	

public:
	
	~MyString();
	void Initresult();
	int MyCompare(const char* scr);
	void MyAppend(const char* scr);
	void MyInsert(int a, const char* scr);
	void MySubstr(int a, int b);
	void MyErase(int a, int b);
};
