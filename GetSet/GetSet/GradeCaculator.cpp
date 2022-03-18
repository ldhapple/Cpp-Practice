#include "GradeCalculator.h"

void GradeCalculator::PrintScore()
{
	for (int i = 0; i < GetNumOfSubject(); i++)
	{
		cout << sub[i].GetSubject() << ": ����=>" << sub[i].GetGrade() << "  ����=>" << sub[i].GetScore() << endl;
	}
}

float GradeCalculator::CalculateGrade()
{
	for (int i = 0; i < GetNumOfSubject(); i++)
	{
		total += sub[i].GetGrade() * sub[i].GetScore();
		totalGrade += sub[i].GetGrade();
	}

	result = total / totalGrade;


	return result;
}