#include "readstring.h"
#include <iostream>
#include <fstream>



void readFile::read()
{
	ifstream inFile("test.txt");

	for (int i = 0; !inFile.eof(); i++)
	{
		getline(inFile, fileString[i]);
		cout << fileString[i] << endl;
	}
	
	inFile.close();

}

void findWord::findword()
{
	cout << "알파벳으로 시작하는 단어들을 찾습니다. 알파벳을 입력하세요" << endl;
	cin >> c;

	readFile r;

	for (int i = 0; i < MAX_SIZE; i++)
	{
		index = r.fileString[i].find(c,index + 1);
		cout << index << endl;
	}
	
	




	/*for (int i = 0; i < MAX_SIZE; i++)
	{
		index[i] = fileString[i].find(c, index[i] + 1); //size
		cout << index[i] << endl;
	}*/
	

	//fileString->substr(fileString->find(c));
	
}