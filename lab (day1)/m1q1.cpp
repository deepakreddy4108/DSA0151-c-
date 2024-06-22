#include <iostream>
#include <cmath> // For sqrt() function

using namespace std;

int main() {
    int number, result;

    cout << "Enter a number: ";
    cin >> number;

    if (number >= 0) {
        result = sqrt(number);
        cout << "The square root of " << number << " is " << result << endl;
    } else {
        cout << "Error: Cannot find the square root of a negative number." << endl;
    }

    return 0;
}

