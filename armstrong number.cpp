#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int number, originalNumber, remainder, result = 0, n = 0;

    // Input a number from the user
    cout << "Enter an integer: ";
    cin >> number;

    originalNumber = number;

    // Count number of digits
    while (originalNumber != 0) {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    // Calculate result
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    // Check if the number is an Armstrong number
    if (result == number)
        cout << number << " is an Armstrong number." << endl;
    else
        cout << number << " is not an Armstrong number." << endl;

    return 0;
}

