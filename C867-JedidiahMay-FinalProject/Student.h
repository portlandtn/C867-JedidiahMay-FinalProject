#pragma once
#include <string>
#include <iostream>
#include "Degree.h"

using namespace std;

class Student
{
public:
	//Constructors
	Student(); //Default

	Student(string, string, string, string, int, int*, Degree);
	~Student();

	//Accessor Methods
	string GetStudentID();
	string GetFirstName();
	string GetLastName();
	string GetEmailAddress();
	int GetAge();
	int* GetNumberOfDaysToComplete();
	
	//Pure virtual functions - no implementations necessary on Student class
	virtual Degree GetDegreeProgram() = 0;
	virtual void Print() = 0;

	//Mutator Methods
	void SetStudentID(string);
	void SetFirstName(string);
	void SetLastName(string);
	void SetEmailAddress(string);
	void SetAge(int);
	void SetNumberOfDaysToComplete(int*);

private:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int* numberOfDaysToComplete;
	Degree degreeProgram;
};

