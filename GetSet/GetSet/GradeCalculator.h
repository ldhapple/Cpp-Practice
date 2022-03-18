#pragma once
#include "Grade.h"

class GradeCalculator : public Grade
{
private:
	double total = 0;
	int totalGrade = 0;
	float result;

public:
	void PrintScore();
	float CalculateGrade();
};