#pragma once
#include <string>

#define MAX_SIZE 100

using namespace std;



class readFile
{
private:
	
	
public:
	string * fileString = new string[MAX_SIZE];
	void read();
};

class findWord
{
private:
	char c;
	int index;

public:
	void findword();
};

class printWord
{

};