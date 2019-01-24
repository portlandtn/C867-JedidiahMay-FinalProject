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
	string GetStudentID() const;
	string GetFirstName() const;
	string GetLastName() const;
	string GetEmailAddress() const;
	int GetAge() const;
	int* GetNumberOfDaysToComplete();
	
	//Pure virtual function - no implementations necessary on Student class as this will be handled by sub classes.
	virtual Degree GetDegreeProgram() = 0;

	//Handled by sub clases
	virtual void Print();

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

