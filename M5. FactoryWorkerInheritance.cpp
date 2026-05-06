#include <iostream>
#include "Employee.h"
#include "ProductWorker.h"

#include <iostream>
#include <limits>

using namespace std;

void ClearInputBuffer() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

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

        if (cin.fail()) {
            ClearInputBuffer();
            cout << "Invalid menu input.\n";
            continue;
        }
        
        
        //Logic for creating Employee
        if (choice == 1) {
            string name;
            string date;
            int num;
            

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

                    if (cin.fail()) {
                        throw Employee::InvalidEmployeeNumber("Invalid numeric input.");
                    }

                    emp = new Employee(name, num, date);
                    valid = true;
                }
                catch (Employee::InvalidEmployeeNumber e) {
                    cout << "Error: " << e.Message << endl;
                    ClearInputBuffer();
                }
            }

            cout << "\nEmployee Created:\n";
            emp->PrintEmployee();

            delete emp;
        }
        //Logic For Creating Production Worker
        else if (choice == 2) {
            string name;
            string date;
            int num;
            int shift;
            double pay;

            cout << "\nEnter Employee Name: ";
            cin.ignore();
            getline(cin, name);

            cout << "Enter Hire Date: ";
            getline(cin, date);

            //Employee Number Validation
            bool ValidEmp = false; 
            while (!ValidEmp) {
                try {
                    cout << "Enter Employee Number (0 - 9999): ";
                    cin >> num;

                    if (cin.fail()) {
                        throw Employee::InvalidEmployeeNumber("Invalid Numeric Input.");
                    }
                    ValidEmp = true;
                }
                catch (Employee::InvalidEmployeeNumber e) {
                    cout << "Error: " << e.Message << endl;
                    ClearInputBuffer();
                }
            }

            //Shift Validation
            bool ValidShift = false;
            while (!ValidShift) {
                try {
                    cout << "Enter Shift (1 = Day, 2 = Night): ";
                    cin >> shift;

                    if (cin.fail()) {
                        throw ProductionWorker::InvalidShift("Invalid Numeric Input.");
                    }
               
                    if (shift != 1 && shift != 2) {
                        throw ProductionWorker::InvalidShift("Shift must be 1 or 2.");
                    }

                    ValidShift = true;
                }
                catch (ProductionWorker::InvalidShift e) {
                    cout << "Error: " << e.Message << endl;
                    ClearInputBuffer();
                }
            }

            //Hourly Pay Validation
            bool ValidPay = false;
            while (!ValidPay) {
                try {
                    cout << "Enter Hourly Pay: ";
                    cin >> pay;

                    if (cin.fail()) {
                        throw ProductionWorker::InvalidPayRate("Invalid numeric input.");
                    }

                    if (pay < 0) {
                        throw ProductionWorker::InvalidPayRate("Pay must be positive.");
                    }

                    ValidPay = true;
                }
                catch (ProductionWorker::InvalidPayRate e) {
                    cout << "Error: " << e.Message << endl;
                    ClearInputBuffer();
                }
            }

            //Creates object after validation
            ProductionWorker worker(name, num, date, shift, pay);

            cout << "\nProduction Worker Created:\n";
            worker.PrintProductionWorker();
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


