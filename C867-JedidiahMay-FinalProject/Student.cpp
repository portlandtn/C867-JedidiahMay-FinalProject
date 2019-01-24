#include "pch.h"
#include "Student.h"

using namespace std;

Student::Student()
{
}


Student::Student(string, string, string, string, int, int *, Degree)
{
}

Student::~Student()
{
}

string Student::GetStudentID()
{
	return string();
}

string Student::GetFirstName()
{
	return string();
}

string Student::GetLastName()
{
	return string();
}

string Student::GetEmailAddress()
{
	return string();
}

int Student::GetAge()
{
	return 0;
}

int * Student::GetNumberOfDaysToComplete()
{
	return nullptr;
}

void Student::SetStudentID(string)
{
}

void Student::SetFirstName(string)
{
}

void Student::SetLastName(string)
{
}

void Student::SetEmailAddress(string)
{
}

void Student::SetAge(int)
{
}

void Student::SetNumberOfDaysToComplete(int *)
{
}
