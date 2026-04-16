#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std; 

class Employee {
private:
	string Name;
	string EmployeeNumber;
	string HireDate;

public:
	//Default Constructor
	Employee();

	//Param Constructor
	Employee(string n, string Num, string Date);

	//Mutators (setters)
	void SetName(string n);
	void SetEmployeeNumber(string Num);
	void SetHireDate(string Date);

	//Accessors (getters)
	string GetName() const;
	string GetEmployeeNumber() const;
	string GetHireDate() const;

	//Prints Employee info
	void PrintEmployee() const;
};

#endif
