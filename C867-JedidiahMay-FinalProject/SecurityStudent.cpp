#include "pch.h"
#include "SecurityStudent.h"


SecurityStudent::SecurityStudent()
{
}

SecurityStudent::~SecurityStudent()
{
}

SecurityStudent::SecurityStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int* numberOfDaysToCompleteCourse, Degree degreeProgram) :
	Student(studentID, firstName, lastName, emailAddress, age, numberOfDaysToCompleteCourse, degreeProgram)

{
}

Degree SecurityStudent::GetDegreeProgram()
{
	return degreeProgram;
}

//Overrides Print function in Student class
void SecurityStudent::Print()
{
	cout << "Student ID: " << GetStudentID() << "\t First Name: " << GetFirstName() << "\t Last Name: " << GetLastName() << "\t Age: " << GetAge() << "\t";

	for (int i = 0; i < 3; ++i) {
		cout << "Number of Days to Complete Course " << i + 1 << ": " << GetNumberOfDaysToComplete()[i] << "\t";
	}
	cout << "Degree Program: " << this->GetDegreeProgram() << endl;
}

