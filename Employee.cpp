#include "Employee.h"
#include <iostream>

using namespace std;



//Default Constructor
//Pre: None
//Post: Initializes members to empty strings
Employee::Employee() {
	Name = "";
	EmployeeNumber = "";
	HireDate = "";
}

//Param Constructor
//Pre: Valid String Provided
//Post: Initializes all member variables
Employee::Employee(string n, string Num, string Date) {
	Name = n;
	EmployeeNumber = Num;
	HireDate = Date;
}

//Setters
//Pre: Valid string input
//Post: Updates corresponding member variable
void Employee::SetName(string n) {
	Name = n;
}

void Employee::SetEmployeeNumber(string Num) {
	EmployeeNumber = Num;
}

void Employee::SetHireDate(string Date) {
	HireDate = Date;
}

//Getters
//Pre: None
//Post: Returns member variable
string Employee::GetName() const {
	return Name;
}

string Employee::GetEmployeeNumber() const {
	return EmployeeNumber;
}

string Employee::GetHireDate() const {
	return HireDate;
}

//Print Function
//Pre: Object is initialized
//Post: Prints employee
void Employee::PrintEmployee() const {
	cout << "Name: " << Name << endl;
	cout << "Employee Number: " << EmployeeNumber << endl;
	cout << "Hire Date: " << HireDate << endl;
}

