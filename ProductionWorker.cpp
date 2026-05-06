#include "ProductWorker.h"
#include <iostream>

using namespace std;

//Default Constructor 
ProductionWorker::ProductionWorker() : Employee() {
	Shift = 1;
	HourlyPay = 0.0;
}

//Parameterized constructor using the initializer list
//This is constructor chaining to Employee
ProductionWorker::ProductionWorker(string Name, string Num, string Date, int s, double Pay) : Employee(Name, Num, Date) {
	Shift = s;
	HourlyPay = Pay;
}

//Setters
void ProductionWorker::SetShift(int s) {
	Shift = s;
}

void ProductionWorker::SetHourlyPay(double Pay) {
	HourlyPay = Pay;
}

//Getters
int ProductionWorker::GetShift() const {
	return Shift;
}

double ProductionWorker::GetHourlyPay() const {
	return HourlyPay;
}

//Print Function
void ProductionWorker::PrintProductionWorker() const {
	//Reuse base class function
	PrintEmployee();

	cout << "Shift: " << (Shift == 1 ? "Day" : "Night") << endl;
	cout << "Hourly Pay: $" << HourlyPay << endl;
}