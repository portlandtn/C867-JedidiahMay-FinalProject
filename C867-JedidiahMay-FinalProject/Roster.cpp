// C867-JedidiahMay-FinalProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "Roster.h"

using namespace std;


Roster::Roster()
{
}

Roster::~Roster()
{
}

void Roster::Add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeProgram)
{
	int daysInCourse[3] = { daysInCourse1, daysInCourse2, daysInCourse3 };
	//FIX ME
	cout << "FIX ME: Add students to Rosters" << endl;
}

void Roster::Remove(string studentID)
{
	//FIX ME
	cout << "FIX ME: Remove this guy: " << studentID << endl;
}

void Roster::PrintAll()
{ 
	//FIX ME
	cout << "FIX ME: Should Print All" << endl;
}

void Roster::PrintAverageDaysInCourse(string studentID)
{
	//FIX ME
	cout << "FIX ME: Should print average Days In Course for this guy: " << studentID << endl;
}

void Roster::PrintInvalidEmails()
{
	//FIX ME
	cout << "FIX ME: Should printer invalid emails." << endl;
}

void Roster::PrintByDegreeProgram(int degreeProgram)
{
	//FIX ME
	cout << "FIX ME: Should print by students in a degree program by integer of this: " << degreeProgram << endl;
}

int main()
{
	const string studentData[] =
	{
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Jedidiah,May,jmay43@wgu.edu,36,15,25,10,SOFTWARE"
	};

	Roster* classRoster = new Roster();

	string tempStudentDataArray[5];
	//Extracting arrays from the studentData array above using ',' as the delimeter.
	for (int i = 0; i < sizeof(studentData) / sizeof(studentData[i]); ++i) {
		tempStudentDataArray[i] = studentData[i];

		string ID = tempStudentDataArray[i].substr(0, tempStudentDataArray[i].find(','));
		tempStudentDataArray[i].erase(0, ID.length() + 1);

		string firstName = tempStudentDataArray[i].substr(0, tempStudentDataArray[i].find(','));
		tempStudentDataArray[i].erase(0, firstName.length() + 1);

		string lastName = tempStudentDataArray[i].substr(0, tempStudentDataArray[i].find(','));
		tempStudentDataArray[i].erase(0, lastName.length() + 1);

		string email = tempStudentDataArray[i].substr(0, tempStudentDataArray[i].find(','));
		tempStudentDataArray[i].erase(0, email.length() + 1);

		string stringAge = tempStudentDataArray[i].substr(0, tempStudentDataArray[i].find(','));
		tempStudentDataArray[i].erase(0, stringAge.length() + 1);
		int age = stoi(stringAge);

		string stringDays1 = tempStudentDataArray[i].substr(0, tempStudentDataArray[i].find(','));
		tempStudentDataArray[i].erase(0, stringDays1.length() + 1);
		int days1 = stoi(stringDays1);

		string stringDays2 = tempStudentDataArray[i].substr(0, tempStudentDataArray[i].find(','));
		tempStudentDataArray[i].erase(0, stringDays2.length() + 1);
		int days2 = stoi(stringDays2);

		string stringDays3 = tempStudentDataArray[i].substr(0, tempStudentDataArray[i].find(','));
		tempStudentDataArray[i].erase(0, stringDays3.length() + 1);
		int days3 = stoi(stringDays3);

		string stringDegreeProgram = tempStudentDataArray[i].substr(0, tempStudentDataArray[i].find(','));

		Degree degreeProgram;
		
		if (stringDegreeProgram == "SECURITY") {
			degreeProgram = SECURITY;
		}
		else if (stringDegreeProgram == "NETWORK") {
			degreeProgram = NETWORK;
		}
		else {
			degreeProgram = SOFTWARE;
		}

		//Used to verify parsing of data worked correctly
		//cout << "ID: " << ID << "\t Name: " << firstName << " " << lastName << "\t Email: " << email;
		//cout << "\t Age: " << age << "\t Course 1: " << days1 << " 2: " << days2 << " 3: " << days3;
		//cout << "\t Program: " << degreeProgram << endl << endl;

		classRoster->Add(ID, firstName, lastName, email, age, days1, days2, days3, degreeProgram);
	}

	//Demonstrate functionality with these loops:
	cout << "Course Title: C867 Scripting and Programming Applications" << endl;
	cout << "Programming Language: C++" << endl;
	cout << "Student ID: 000817270" << endl;
	cout << "Name: Jedidiah May" << endl << endl;

	classRoster->PrintAll();
	classRoster->PrintInvalidEmails();

	for (int i = 0; i < sizeof(classRoster) / sizeof(classRoster[i]); ++i) {
		
	}
	classRoster->PrintByDegreeProgram(SOFTWARE);
	classRoster->Remove("A3");
	classRoster->Remove("A3");

	//Destructor
	delete classRoster;
}


