#pragma once
#include <iostream>
#include <string>
using namespace std;

class Grade
{
private:
	string subject; //�����
	int grade; //����
	float score; //����
	int numOfSubject; //���� ��

protected:
	Grade *sub;

public:
	void EnterGrade();
	string GetSubject() const;
	float GetScore() const;
	int GetGrade() const;
	void SetNumOfSubject(int num);
	int GetNumOfSubject() const;

};

