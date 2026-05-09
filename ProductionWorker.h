#pragma once
#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "Employee.h"

class ProductionWorker : public Employee {
private:
	int Shift;
	double HourlyPayRate;

public:
	//Def Construct
	ProductionWorker();

	//Param Construct
	ProductionWorker(string Name, string Num, string Date, int WorkerShift, double PayRate);

	//Mutators
	void SetShift(int WorkerShift);
	void SetHourlyPayRate(double PayRate);

	//Accessors
	int GetShift() const;
	double GetHourlyPayRate() const;

	//Print Production Worker info
	void PrintProductionWorker() const;

};

#endif





