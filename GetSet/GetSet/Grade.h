#pragma once
#include <iostream>
#include <string>
using namespace std;

class Grade
{
private:
	string subject; //과목명
	int grade; //학점
	float score; //점수
	int numOfSubject; //과목 수

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

