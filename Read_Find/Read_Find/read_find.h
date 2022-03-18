#pragma once

#include <string>
#include <vector>

#define MAX_SIZE 100

using namespace std;



class readFile
{
private:
	string buffer;
	
public:
	string * fileString = new string[MAX_SIZE];
	vector<string> words;
	void read();
	void split();
};

class findWord
{
private:
	string first_alphabet;
	int special_char;
	
public:
	string *find_result = new string[MAX_SIZE];
	void findword();
	void Enter_first_alphabet();
};

class printStr
{
private:

public:
	void print_read();
	void print_findword();
};