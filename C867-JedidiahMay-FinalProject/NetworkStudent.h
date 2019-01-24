#pragma once
#include "Student.h"

class NetworkStudent : public Student
{
public:
	NetworkStudent();
	~NetworkStudent();

	NetworkStudent(string, string, string, string, int, int*, Degree);

	Degree GetDegreeProgram() override;

	void Print() override;

private:
	const Degree degreeProgram = NETWORK;
};

