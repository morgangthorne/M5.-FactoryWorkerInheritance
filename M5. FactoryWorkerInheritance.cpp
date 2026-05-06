#include <iostream>
#include "Employee.h"
#include "ProductWorker.h"

#include <iostream>

using namespace std;

int main()
{
    //Testing Employee Class
    try {
        Employee emp1("Morgan Thorne", 5, "01/15/2020");
        cout << "Employee Information: " << endl;
        emp1.PrintEmployee();
    }
    catch (Employee::InvalidEmployeeNumber e) {
        cout << "Error: " << e.Message << endl;
    }

    //ProductionWorker tests
    try {
        ProductionWorker wrk1("Snow White", 456, "02/10/2021", 1, 17.90);
        cout << "Production Worker (Day Shift): " << endl;
        wrk1.PrintProductionWorker();
   }
    catch (ProductionWorker::InvalidShift e) {
        cout << "Error: " << e.Message << endl;
    }
    catch (ProductionWorker::InvalidPayRate e) {
        cout << "Error: " << e.Message << endl;
    }


    return 0;
}


