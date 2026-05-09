#include <iostream>
#include "ShiftSupervisor.h"

using namespace std;

//Def Constructor
ShiftSupervisor::ShiftSupervisor() : Employee() {
    AnnualSalary = 0.0;
    AnnualBonus = 0.0;
}

//Param Constructor
ShiftSupervisor::ShiftSupervisor(string Name, string Num, string Date, double Salary, double Bonus) : Employee(Name, Num, Date) {
    AnnualSalary = Salary;
    AnnualBonus = Bonus;
}

//Setters
void ShiftSupervisor::SetAnnualSalary(double Salary) {
    AnnualSalary = Salary;
}

void ShiftSupervisor::SetAnnualBonus(double Bonus) {
    AnnualBonus = Bonus;
}

//Getters
double ShiftSupervisor::GetAnnualSalary() const {
    return AnnualSalary;
}

double ShiftSupervisor::GetAnnualBonus() const {
    return AnnualBonus;
}

//Print function
void ShiftSupervisor::PrintShiftSupervisor() const {
    PrintEmployee(); 
    cout << "Annual Salary: $" << AnnualSalary << endl;
    cout << "Annual Bonus: $" << AnnualBonus << endl;
}