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
            cout << "\nEmployee option selected\n";
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


