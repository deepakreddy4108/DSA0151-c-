#include <iostream>

using namespace std;

int main() {
    int number;
    int sum = 0;
    int divisor = 1; // Start with the smallest divisor

    cout << "Enter a number: ";
    cin >> number;

    // Calculate the sum of divisors
    while (divisor < number) {
        if (number % divisor == 0) {
            sum += divisor;
        }
        divisor++;
    }

    // Check if the sum of divisors equals the number
    if (sum == number) {
        cout << number << " is a perfect number" << endl;
    } else {
        cout << number << " is not a perfect number" << endl;
    }

    return 0;
}

