#include <iostream>
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"

#include <iostream>

using namespace std;

int main()
{

    //Day Shift object
    ProductionWorker DayWorker("Morgan Thorne", "210", "6/27/2003", 1, 15.60);
    
    //Prints Day Shift info
    cout << "Day Shift Worker" << endl;
    DayWorker.PrintProductionWorker();

    cout << endl;

    //NightSHift object
    ProductionWorker NightWorker("John Doe", "212", "5/05/2005", 2, 17.38);
    
    //Nightshift worker info
    cout << "Night Shift Worker" << endl;
    NightWorker.PrintProductionWorker();

    //ShiftSupervisor object
    ShiftSupervisor Supervisor("Bob Bob", "300", "1/16/2003", 72000.00, 3000.00);

    //Prints the Supervisors info
    cout << "\nShift Supervisor Info: " << endl;
    Supervisor.PrintShiftSupervisor();

    //TeamLeader Object
    TeamLeader Leader("Ricky Bobby", "329", "2/10/2000", 1, 23.21, 600.0, 21, 19);

    //Prints TeamLeader info
    cout << "Team Leader Info: " << endl;
    Leader.PrintTeamLeader();

    return 0; 

}


