#include "pch.h"
#include "Student.h"

using namespace std;

Student::Student()
{
	this->studentID = "";
	this->firstName = "";
	this->lastName = "";
	this->emailAddress = "";
	this->age = 0;
	this->numberOfDaysToComplete[3];
}


Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int * numberOfDaysToComplete, Degree)
{
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	this->numberOfDaysToComplete = numberOfDaysToComplete;
}

Student::~Student()
{
}

string Student::GetStudentID() const
{
	return studentID;
}

string Student::GetFirstName() const
{
	return firstName;
}

string Student::GetLastName() const
{
	return lastName;
}

string Student::GetEmailAddress() const
{
	return emailAddress;
}

int Student::GetAge() const
{
	return age;
}

int * Student::GetNumberOfDaysToComplete()
{
	return numberOfDaysToComplete;
}

void Student::Print()
{
	//Implementation not necessary as this will be handled by sub classes.
}

void Student::SetStudentID(string studentID)
{
	this->studentID = studentID;
}

void Student::SetFirstName(string firstName)
{
	this->firstName = firstName;
}

void Student::SetLastName(string lastName)
{
	this->lastName = lastName;
}

void Student::SetEmailAddress(string emailAddress)
{
	this->emailAddress = emailAddress;
}

void Student::SetAge(int age)
{
	this->age = age;
}

void Student::SetNumberOfDaysToComplete(int * numberOfDaysToComplete)
{
	this->numberOfDaysToComplete = numberOfDaysToComplete;
}
