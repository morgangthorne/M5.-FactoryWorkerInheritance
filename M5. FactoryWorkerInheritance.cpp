#include <iostream>
#include "Employee.h"
#include "ProductionWorker.h"

#include <iostream>

using namespace std;

int main()
{
    ProductionWorker DayWorker("Morgan Thorne", "210", "6/27/2003", 1, 15.60);

    ProductionWorker NightWorker("John Doe", "212", "5/05/2005", 1, 17.38);

    cout << "Day Shift Worker" << endl;
    DayWorker.PrintProductionWorker();

    cout << endl;

    cout << "Night Shift Worker" << endl;
    NightWorker.PrintProductionWorker();

    return 0; 

}


