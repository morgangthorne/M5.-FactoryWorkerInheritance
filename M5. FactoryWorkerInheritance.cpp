#include <iostream>
#include "Employee.h"

#include <iostream>

using namespace std;

int main()
{
    //Testing Employee Class

    Employee emp1("Morgan Thorne", "123-A", "01/15/2020");

    cout << "Employee Information: " << endl;

    emp1.PrintEmployee();
}


