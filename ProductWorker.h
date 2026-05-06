#pragma once
#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"

class ProductionWorker : public Employee {
private:
	int Shift;//1 = Day, 2 = Night
	double HourlyPay;

public:
	//Constructors
	ProductionWorker();
	ProductionWorker(string Name, int Num, string Date, int s, double Pay);

	class InvalidShift {
	public: 
		string Message;
		InvalidShift(string msg) { 
			Message = msg; }
	};

	class InvalidPayRate {
	public: 
		string Message;
		InvalidPayRate(string msg) {
			Message = msg;
		}
	};

	//Setters
	void SetShift(int s);
	void SetHourlyPay(double Pay);

	//Getters
	int GetShift() const;
	double GetHourlyPay() const;

	//Print Function
	void PrintProductionWorker() const;






};

#endif