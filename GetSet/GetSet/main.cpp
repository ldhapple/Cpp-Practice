#include <iostream>
#include "GradeCalculator.h"
using namespace std;

void main()
{
	cout << "--------대학학점계산기--------" << endl;
	
	GradeCalculator *gr = new GradeCalculator();
	gr->EnterGrade();
	gr->PrintScore();

	cout << gr->GetNumOfSubject() << "개의 과목 평균은=>" << gr->CalculateGrade() << endl;

	delete gr;

	system("pause");
}