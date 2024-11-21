#include <iostream>
#include <string>

bool isValidCustomerNumber(const std::string& customerNumber) {
    if (customerNumber.length() != 6) {
        return false;
    }

    if (!((customerNumber[0] >= 'A' && customerNumber[0] <= 'Z') ||
        (customerNumber[0] >= 'a' && customerNumber[0] <= 'z'))) {
        return false;
    }

    if (!((customerNumber[1] >= 'A' && customerNumber[1] <= 'Z') ||
        (customerNumber[1] >= 'a' && customerNumber[1] <= 'z'))) {
        return false;
    }

    for (int i = 2; i < 6; ++i) {
        if (customerNumber[i] < '0' || customerNumber[i] > '9') {
            return false;
        }
    }

    return true;
}