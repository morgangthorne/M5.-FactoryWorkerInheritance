#include <iostream>
#include "Employee.h"
#include "ProductWorker.h"

#include <iostream>

using namespace std;

int main()
{
    //Testing Employee Class
    try {
        Employee emp1("Morgan Thorne", -5, "01/15/2020");
        cout << "Employee Information: " << endl;
        emp1.PrintEmployee();
    }
    catch (Employee::InvalidEmployeeNumber e) {
        cout << "Error: " << e.Message << endl;
    }

    //ProductionWorker tests
    ProductionWorker worker1("Alice Smith", 456, "02/10/2021", 1, 17.90);
    ProductionWorker worker2("Ricky Bobby", 789, "07/18/2019", 2, 21.25);

    cout << "Production Worker (Day Shift):" << endl;
    worker1.PrintProductionWorker();

    cout << "\n----------------------\n";

    cout << "Production Worker (Night Day):" << endl;
    worker2.PrintProductionWorker();

    return 0;
}


