#include <iostream>
#include "Employee.h"
#include "ProductWorker.h"

#include <iostream>

using namespace std;

int main()
{
    int choice;

    do {
        cout << "\n===== Factory Worker Menu =====" << endl;
        cout << "1. Create Employee" << endl;
        cout << "2. Create Production Worker" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            string name;
            int num;
            string date;

            cout << "\nEnter Employee's Name: ";
            cin.ignore();
            getline(cin, name);

            cout << "Enter Their Hire Date: ";
            getline(cin, date);

            bool valid = false;
            Employee* emp = nullptr;

            while (!valid) {
                try {
                    cout << "Enter Employee Number (0 - 9999): ";
                    cin >> num;

                    emp = new Employee(name, num, date);
                    valid = true;
                }
                catch (Employee::InvalidEmployeeNumber e) {
                    cout << "Error: " << e.Message << endl;
                    cout << "Please re-enter a valid number.\n";
                }
            }

            cout << "\nEmployee Created:\n";
            emp->PrintEmployee();

            delete emp;
        }
        else if (choice == 2) {
            cout << "\nProduction Employee option selected\n";
        }
        else if (choice == 3) {
            cout << "\nExit option\n";
        }
        else {
            cout << "Invalid choice\n";
        }
    } while (choice != 3);

    return 0;
}


