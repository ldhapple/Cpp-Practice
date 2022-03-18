#include "read_find.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>


void readFile::read()
{
	ifstream inFile("test.txt");

	for (int i = 0; !inFile.eof(); i++)
	{
		getline(inFile, fileString[i]);
	}

	inFile.close();
}

void readFile::split()
{
	read();
	for (int i = 0; i < MAX_SIZE; i++)
	{
		stringstream ss(fileString[i]);
		while (getline(ss, buffer,' '))
		{
			words.push_back(buffer);
		}
	}
}

void findWord::Enter_first_alphabet()
{
	cout << "알파벳으로 시작하는 단어들을 찾습니다. 알파벳을 입력하세요" << endl;
	cin >> first_alphabet;
}

void findWord::findword()
{
	readFile r;
	r.split();

	Enter_first_alphabet();

	sort(r.words.begin(), r.words.end());
	r.words.erase(unique(r.words.begin(), r.words.end()), r.words.end());
	//중복원소를 vector 제일 뒷부분으로 보내 쓰레기값 처리 후 삭제. unique의 반환값이 쓰레기값 첫 부분

	for (int i = 0; i < r.words.size(); i++)
	{
		string first = r.words[i].substr(0, 1);

		if (first == "(" || first == ")" || first == "'" || first == "\"")
		{
			first = r.words[i].substr(1, 1);
			if (first_alphabet.compare(first) == 0)
			{
				special_char = r.words[i].find("(");
				if (special_char != -1)
				{
					find_result[i] = r.words[i].erase(special_char, 1);
				}

				special_char = r.words[i].find(")");
				if (special_char != -1)
				{
					find_result[i] = r.words[i].erase(special_char, 1);
				}

				special_char = r.words[i].find("'");
				if (special_char != -1)
				{
					find_result[i] = r.words[i].erase(special_char, 1);
				}

				special_char = r.words[i].find("\"");
				if (special_char != -1)
				{
					find_result[i] = r.words[i].erase(special_char, 1);
				}

				special_char = r.words[i].find("\"", special_char + 1);
				if (special_char != -1)
				{
					find_result[i] = r.words[i].erase(special_char, 1);
				}
			}

		}
		else
		{
			transform(first_alphabet.begin(), first_alphabet.end(), first_alphabet.begin(), tolower);
			if (first_alphabet.compare(first) == 0)
			{
				find_result[i] = r.words[i];
			}

			transform(first_alphabet.begin(), first_alphabet.end(), first_alphabet.begin(), toupper);
			if (first_alphabet.compare(first) == 0)
			{
				find_result[i] = r.words[i];
			}
		}
	}
}

void printStr::print_findword()
{
	findWord f;
	f.findword();

	for (int i = 0; i < MAX_SIZE; i++)
	{
		if (f.find_result[i].empty() == false)
			cout << f.find_result[i] << endl;
	}
}

void printStr::print_read()
{
	readFile r;
	r.read();

	for (int i = 0; r.fileString[i].empty() == false; i++)
		cout << r.fileString[i] << endl;
}