#include "pch.h"
#include "SecurityStudent.h"


SecurityStudent::SecurityStudent()
{
}

SecurityStudent::~SecurityStudent()
{
}

SecurityStudent::SecurityStudent(string, string, string, string, int, int *, Degree)
{
}

Degree SecurityStudent::GetDegreeProgram()
{
	return Degree();
}

//Overrides Print function in Student class
void SecurityStudent::Print()
{
	cout << "Student ID: " << GetStudentID() << "\t First Name: " << GetFirstName() << "\t Last Name: " << GetLastName() << "\t Age: " << GetAge() << "\t";

	for (int i = 0; i < 3; ++i) {
		cout << "Number of Days to Complete Course " << i << ": " << GetNumberOfDaysToComplete()[i] << "\t";
	}
	cout << "Degree Program: " << this->GetDegreeProgram() << endl;
}

