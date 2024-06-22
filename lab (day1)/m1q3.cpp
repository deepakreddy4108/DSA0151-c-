#include <iostream>

using namespace std;

int main() {
    int number, sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    // Calculate the sum of divisors
    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    // Check if the sum of divisors equals the number
    if (sum == number) {
        cout << number << " is a perfect number" << endl;
    } else {
        cout << number << " is not a perfect number" << endl;
    }

    return 0;
}

