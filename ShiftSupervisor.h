#pragma once
#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H

#include "Employee.h"

class ShiftSupervisor : public Employee {
private:
    double AnnualSalary;
    double AnnualBonus;

public:
    // Def Constructor
    // Pre: None
    // Post: Initializes salary and bonus to 0
    ShiftSupervisor();

    // Param Constructor
    // Pre: Valid name, number, date, salary, and bonus provided
    // Post: Initializes all member variables
    ShiftSupervisor(string Name, string Num, string Date, double Salary, double Bonus);

    // Setters
    void SetAnnualSalary(double Salary);
    void SetAnnualBonus(double Bonus);

    // Getters
    double GetAnnualSalary() const;
    double GetAnnualBonus() const;

    // Print function
    // Pre: Object initialized
    // Post: Prints employee info + supervisor-specific info
    void PrintShiftSupervisor() const;
};

#endif