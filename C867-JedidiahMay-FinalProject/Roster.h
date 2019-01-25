#pragma once
#include "NetworkStudent.h"
#include "SecurityStudent.h"
#include "SoftwareStudent.h"

class Roster
{
public:
	Roster();
	~Roster();

	void Add(string, string, string, string, int, int, int, int, Degree);
	void Remove(string);
	void PrintAll();
	void PrintAverageDaysInCourse(string);
	void PrintInvalidEmails();
	void PrintByDegreeProgram(int);

private:
	Student* classRosterArray[5];
	int arraySize = 0;
};