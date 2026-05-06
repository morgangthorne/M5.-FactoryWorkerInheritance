#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std; 

class Employee {
private:
	string Name;
	int EmployeeNumber;
	string HireDate;

public:
	//Default Constructor
	Employee();

	//Param Constructor
	Employee(string n, int Num, string Date);

	//Mutators (setters)
	void SetName(string n);
	void SetEmployeeNumber(int Num);
	void SetHireDate(string Date);

	//Accessors (getters)
	string GetName() const;
	int GetEmployeeNumber() const;
	string GetHireDate() const;

	//Prints Employee info
	void PrintEmployee() const;

	//Custom Exception Class
	class InvalidEmployeeNumber {
	public:
		string Message;

		InvalidEmployeeNumber(string msg) {
			Message = msg;
		}
	};
};

#endif
