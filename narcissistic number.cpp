#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num, originalNum, sum = 0, numDigits = 0;

    // Input a number from the user
    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    // Count the number of digits in the number
    while (num != 0) {
        num /= 10;
        numDigits++;
    }

    num = originalNum;

    // Calculate the sum of each digit raised to the power of the number of digits
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }

    // Check if the sum is equal to the original number
    if (sum == originalNum) {
        cout << originalNum << " is a narcissistic number." << endl;
    } else {
        cout << originalNum << " is not a narcissistic number." << endl;
    }

    return 0;
}

