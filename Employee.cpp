#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee() {
	Name = "";
	EmployeeNumber = "";
	HireDate = "";
}

Employee::Employee(string n, string Num, string Date) {
	Name = n;
	EmployeeNumber = Num;
	HireDate = Date;
}

void Employee::SetName(string n) {
	Name = n;
}

void Employee::SetEmployeeNumber(string Num) {
	EmployeeNumber = Num;
}

void Employee::SetHireDate(string Date) {
	HireDate = Date;
}

string Employee::GetName() const {
	return Name;
}

string Employee::GetEmployeeNumber() const {
	return EmployeeNumber;
}

string Employee::GetHireDate() const {
	return HireDate;
}

void Employee::PrintEmployee() const {
	cout << "Name: " << Name << endl;
	cout << "Employee Number: " << EmployeeNumber << endl;
	cout << "Hire Date: " << HireDate << endl;
}

