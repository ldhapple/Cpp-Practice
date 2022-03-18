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
	cout << "���� ���� �Է����ּ���";
	cin >> numOfSubject;
	SetNumOfSubject(numOfSubject);

	sub = new Grade[numOfSubject];
	for (int i = 0; i < numOfSubject; i++)
	{
		cout << i+1 << "��° �����,����,������ �Է����ּ���." << endl;
		cin >> sub[i].subject;
		cin >> sub[i].grade;
		cin >> sub[i].score;
	}
}


