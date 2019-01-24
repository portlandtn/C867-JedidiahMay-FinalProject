#pragma once
#include "Student.h"

class SecurityStudent : public Student
{
public:
	SecurityStudent();
	~SecurityStudent();

	SecurityStudent(string, string, string, string, int, int*, Degree);

	Degree GetDegreeProgram() override;

	void Print() override;

private:
	const Degree degreeProgram = SECURITY;
};

