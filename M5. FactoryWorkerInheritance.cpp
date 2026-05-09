#include <iostream>
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"

#include <iostream>

using namespace std;

int main()
{
    ProductionWorker DayWorker("Morgan Thorne", "210", "6/27/2003", 1, 15.60);

    ProductionWorker NightWorker("John Doe", "212", "5/05/2005", 2, 17.38);

    //Day Shift worker info
    cout << "Day Shift Worker" << endl;
    DayWorker.PrintProductionWorker();

    cout << endl;

    //Nightshift worker info
    cout << "Night Shift Worker" << endl;
    NightWorker.PrintProductionWorker();

    //ShiftSupervisor object
    ShiftSupervisor Supervisor("Bob Bob", "300", "1/16/2003", 72000.00, 3000.00);

    //Prints the Supervisors info
    cout << "\nShift Supervisor Info: " << endl;
    Supervisor.PrintShiftSupervisor();

    return 0; 

}


