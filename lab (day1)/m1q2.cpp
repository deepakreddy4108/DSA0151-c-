#include <iostream>
#include <cmath> // For cbrt() function

using namespace std;

int main() {
    int number;
    double result;

    cout << "Enter a number: ";
    cin >> number;

    if (number >= 0) {
        result = cbrt(number);
        cout << "The cube root of " << number << " is " << result << endl;
    } else {
        cout << "The cube root of " << number << " is " << -cbrt(-number) << endl;
    }

    return 0;
}

