#include <iostream>
#include "GradeCalculator.h"
using namespace std;

void main()
{
	cout << "--------������������--------" << endl;
	
	GradeCalculator *gr = new GradeCalculator();
	gr->EnterGrade();
	gr->PrintScore();

	cout << gr->GetNumOfSubject() << "���� ���� �����=>" << gr->CalculateGrade() << endl;

	delete gr;

	system("pause");
}