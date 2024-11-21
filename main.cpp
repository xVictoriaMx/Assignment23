#include <iostream>
#include <string>
#include "IsValidNumber.h"

using namespace std;
using namespace ValidNumber;

int main() {
    string customerNumber;
    cout << "Enter customer number: ";
    cin >> customerNumber;

    if (isValidCustomerNumber(customerNumber)) {
        cout << "Valid customer number." << endl;
    }
    else {
        cout << "Invalid customer number." << endl;
    }

    return 0;
}