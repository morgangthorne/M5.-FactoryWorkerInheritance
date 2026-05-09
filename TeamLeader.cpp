#include <iostream>
#include "TeamLeader.h"

using namespace std;

//Def Constructor
TeamLeader::TeamLeader() : ProductionWorker() {
    MonthlyBonus = 0.0;
    RequiredTrainingHours = 0;
    AttendedTrainingHours = 0;
}

//Param Constructor
TeamLeader::TeamLeader(string Name, string Num, string Date, int Shift, double PayRate,
    double Bonus, int RequiredHours, int AttendedHours)
    : ProductionWorker(Name, Num, Date, Shift, PayRate) {
    MonthlyBonus = Bonus;
    RequiredTrainingHours = RequiredHours;
    AttendedTrainingHours = AttendedHours;
}

//Setters
void TeamLeader::SetMonthlyBonus(double Bonus) {
    MonthlyBonus = Bonus;
}

void TeamLeader::SetRequiredTrainingHours(int Hours) {
    RequiredTrainingHours = Hours;
}

void TeamLeader::SetAttendedTrainingHours(int Hours) {
    AttendedTrainingHours = Hours;
}

//Getters
double TeamLeader::GetMonthlyBonus() const {
    return MonthlyBonus;
}

int TeamLeader::GetRequiredTrainingHours() const {
    return RequiredTrainingHours;
}

int TeamLeader::GetAttendedTrainingHours() const {
    return AttendedTrainingHours;
}

//Print function
void TeamLeader::PrintTeamLeader() const {
    PrintProductionWorker(); 
    cout << "Monthly Bonus: $" << MonthlyBonus << endl;
    cout << "Required Training Hours: " << RequiredTrainingHours << endl;
    cout << "Attended Training Hours: " << AttendedTrainingHours << endl;
}