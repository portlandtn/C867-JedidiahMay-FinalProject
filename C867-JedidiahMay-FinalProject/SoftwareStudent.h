#pragma once
#include "Student.h"

class SoftwareStudent : public Student
{
public:
	SoftwareStudent();
	~SoftwareStudent();

	SoftwareStudent(string, string, string, string, int, int*, Degree);

	Degree GetDegreeProgram() override;

	void Print() override;

private:
	const Degree degreeProgram = SOFTWARE;
};

