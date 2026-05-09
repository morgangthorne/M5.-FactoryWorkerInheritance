#include <iostream>
#include "ProductionWorker.h"

using namespace std;

//Def Construct
ProductionWorker::ProductionWorker() : Employee() {
	Shift = 0;
	HourlyPayRate = 0.0;
}

//Param Construct
ProductionWorker::ProductionWorker(string Name, string Num, string Date, int WorkerShift, double PayRate) : Employee(Name, Num, Date){
	Shift = WorkerShift;
	HourlyPayRate = PayRate;
}

//Setter WorkerShift
void ProductionWorker::SetShift(int WorkerShift) {
	Shift = WorkerShift;
}

//Setter HourlyPayRate
void ProductionWorker::SetHourlyPayRate(double PayRate) {
	HourlyPayRate = PayRate;
}

//Returns Shift
int ProductionWorker::GetShift() const {
	return Shift;
}

//Returns HourlyPayRate
double ProductionWorker::GetHourlyPayRate() const {
	return HourlyPayRate;
}

//Prints all Production Worker info
void ProductionWorker::PrintProductionWorker() const {
	PrintEmployee();

	if (Shift == 1) {
		cout << "Day Shift" << endl;
	}
	else if (Shift == 2) {
		cout << "Night Shift" << endl;
	}
	else {
		cout << "Invalid Shift" << endl;
	}

	cout << "Hourly Pay Rate is : $" << HourlyPayRate << endl;
}