#pragma once
#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "ProductionWorker.h"

class TeamLeader : public ProductionWorker {
private:
    double MonthlyBonus;
    int RequiredTrainingHours;
    int AttendedTrainingHours;

public:
    // Def Constructor
    // Pre: None
    // Post: Initializes numeric members to 0
    TeamLeader();

    // Param Constructor
    // Pre: Valid parameters provided
    // Post: Initializes all member variables including base classes
    TeamLeader(string Name, string Num, string Date, int Shift, double PayRate,
        double Bonus, int RequiredHours, int AttendedHours);

    // Setters
    void SetMonthlyBonus(double Bonus);
    void SetRequiredTrainingHours(int Hours);
    void SetAttendedTrainingHours(int Hours);

    // Getters
    double GetMonthlyBonus() const;
    int GetRequiredTrainingHours() const;
    int GetAttendedTrainingHours() const;

    // Print function
    // Pre: Object initialized
    // Post: Prints ProductionWorker info + TeamLeader-specific info
    void PrintTeamLeader() const;
};

#endif