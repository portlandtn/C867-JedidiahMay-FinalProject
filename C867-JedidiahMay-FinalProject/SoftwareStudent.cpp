#include "pch.h"
#include "SoftwareStudent.h"


SoftwareStudent::SoftwareStudent()
{
}

SoftwareStudent::~SoftwareStudent()
{
}

SoftwareStudent::SoftwareStudent(string, string, string, string, int, int *, Degree)
{
}

Degree SoftwareStudent::GetDegreeProgram()
{
	return Degree();
}

//Overrides Print function in Student class
void SoftwareStudent::Print()
{
	cout << "Student ID: " << GetStudentID() << "\t First Name: " << GetFirstName() << "\t Last Name: " << GetLastName() << "\t Age: " << GetAge() << "\t";

	for (int i = 0; i < 3; ++i) {
		cout << "Number of Days to Complete Course " << i << ": " << GetNumberOfDaysToComplete()[i] << "\t";
	}
	cout << "Degree Program: " << this->GetDegreeProgram() << endl;
}