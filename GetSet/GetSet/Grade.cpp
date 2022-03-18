#include "Grade.h"

void Grade::SetNumOfSubject(int num)
{
	numOfSubject = num;
}

int Grade::GetNumOfSubject() const
{
	return numOfSubject;
}

string Grade::GetSubject() const
{
	return subject;
}

int Grade::GetGrade() const
{
	return grade;
}

float Grade::GetScore() const
{
	return score;
}

void Grade::EnterGrade()
{
	cout << "과목 수를 입력해주세요";
	cin >> numOfSubject;
	SetNumOfSubject(numOfSubject);

	sub = new Grade[numOfSubject];
	for (int i = 0; i < numOfSubject; i++)
	{
		cout << i+1 << "번째 과목명,학점,성적을 입력해주세요." << endl;
		cin >> sub[i].subject;
		cin >> sub[i].grade;
		cin >> sub[i].score;
	}
}


