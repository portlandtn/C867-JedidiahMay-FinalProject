#include "pch.h"
#include "NetworkStudent.h"


NetworkStudent::NetworkStudent()
{
}

NetworkStudent::~NetworkStudent()
{
}

NetworkStudent::NetworkStudent(string, string, string, string, int, int *, Degree)
{
}

Degree NetworkStudent::GetDegreeProgram()
{
	return Degree();
}

//Overrides Print function in Student class
void NetworkStudent::Print()
{
	cout << "Student ID: " << GetStudentID() << "\t First Name: " << GetFirstName() << "\t Last Name: " << GetLastName() << "\t Age: " << GetAge() << "\t";

	for (int i = 0; i < 3; ++i) {
		cout << "Number of Days to Complete Course " << i << ": " << GetNumberOfDaysToComplete()[i] << "\t";
	}
	cout << "Degree Program: " << this->GetDegreeProgram() << endl;
}
