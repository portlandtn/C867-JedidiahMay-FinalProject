// C867-JedidiahMay-FinalProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "Roster.h"
#include <iomanip>

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

	switch (degreeProgram)
	{
	case SECURITY:
		classRosterArray[arraySize] = new SecurityStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeProgram);
		break;
	case NETWORK:
		classRosterArray[arraySize] = new NetworkStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeProgram);
		break;
	case SOFTWARE:
		classRosterArray[arraySize] = new SoftwareStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeProgram);
		break;
	default:
		break;
	}
	++arraySize;

}

void Roster::Remove(string studentID)
{
	cout << "Searching for student \'" << studentID << "\' to be removed." << endl;
	bool removed = false;
	for (int i = 0; i < 5; i++) {
		if (classRosterArray[i] != NULL) {
			if (studentID == classRosterArray[i]->GetStudentID()) {
				classRosterArray[i] = nullptr;
				removed = true;
				cout << "Student \'" << studentID << "\' has been removed." << endl;
				break;
			}
		}
	}
	if (!removed) {
		cout << "Student ID \'" << studentID << "\' does not exist." << endl;
	}
}

void Roster::PrintAll()
{
	cout << "Class Roster: " << endl;
	for (int i = 0; i < 5; ++i) {
		this->classRosterArray[i]->Print();
	}
}

void Roster::PrintAverageDaysInCourse(string studentID)
{
	bool found = false;
	//Iterate through each student to find a match to student ID
	for (int i = 0; i < 5; ++i) {
		if (studentID == this->classRosterArray[i]->GetStudentID()) {
			found = true;
			int totalDays = 0;

			//Iterate through each number of days, add to total
			for (int j = 0; j < 3; ++j) {
				totalDays += (classRosterArray[i]->GetNumberOfDaysToComplete()[j]);
			}
			//Output, divide total by three for the average
			cout << "Student ID: " << studentID << "\t Average time to finish three courses: "
				<< totalDays / 3 << endl;
		}
		if (found) {
			break;
		}
	}
}

void Roster::PrintInvalidEmails()
{
	cout << "Students with invalid emails: " << endl;
	for (int i = 0; i < 5; ++i) {

		bool invalid = false;
		string emailAddress = classRosterArray[i]->GetEmailAddress();
		if (emailAddress.find('@', 0) == string::npos) {
			invalid = true;
		}
		else if (emailAddress.find(' ', 0) != string::npos) {
			invalid = true;
		}
		else if (emailAddress.find('.') == string::npos) {
			invalid = true;
		}

		if (invalid == true) {
			cout << this->classRosterArray[i]->GetFirstName() << " " << this->classRosterArray[i]->GetLastName() << ": " << emailAddress << endl;
		}
	}
}

void Roster::PrintByDegreeProgram(int degreeProgram)
{
	cout << "Printing by Degree Program: Software" << endl;
	for (int i = 0; i < 5; ++i) {
		if (degreeProgram == this->classRosterArray[i]->GetDegreeProgram()) {
			classRosterArray[i]->Print();
		}
	}
	cout << endl;
}

int main()
{
	const string studentData[] =
	{
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Jedidiah,May    ,jmay43@wgu.edu,36,15,25,10,SOFTWARE"
	};

	//Instantiate new class of Roster
	Roster* classRoster = new Roster();

	//Extracting arrays from the studentData array above using ',' as the delimeter.
	string tempStudentDataArray[5];

	for (int i = 0; i < sizeof(tempStudentDataArray) / sizeof(tempStudentDataArray[i]); ++i) {
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
		/*
		cout << "ID: " << ID << "\t Name: " << firstName << " " << lastName << "\t Email: " << email;
		cout << "\t Age: " << age << "\t Course 1: " << days1 << " 2: " << days2 << " 3: " << days3;
		cout << "\t Program: " << degreeProgram << endl << endl;
		*/

		classRoster->Add(ID, firstName, lastName, email, age, days1, days2, days3, degreeProgram);
	}

	//Demonstrate functionality:
	int widthLeft = 22;
	cout << setfill('*') << setw(66) << left << "*" << endl;
	cout << setfill(' ');
	cout << setw(widthLeft) << left << "Course Title" << "|";
	cout << "C867 Scripting and Programming Applications" << endl;
	cout << setw(widthLeft) << left << "Programming Language" << "|";
	cout << "C++" << endl;
	cout << setw(widthLeft) << left << "Student" << "|";
	cout << "000817270" << endl;
	cout << setw(widthLeft) << left << "Name" << "|";
	cout << "Jedidiah May" << endl;
	cout << setfill('*') << setw(66) << left << "*" << endl << endl;

	classRoster->PrintAll();
	cout << endl;
	classRoster->PrintInvalidEmails();
	cout << endl;

	//Print average days in course for each student
	cout << "Average days in three courses for each student: " << endl;
	string studentIDArray[] = { "A1", "A2", "A3", "A4", "A5" };
	for (int i = 0; i < 5; ++i) {
		classRoster->PrintAverageDaysInCourse(studentIDArray[i]);
	}
	cout << endl;

	classRoster->PrintByDegreeProgram(SOFTWARE);
	classRoster->Remove("A3");
	classRoster->Remove("A3");

	//Destructor
	delete classRoster;
}


