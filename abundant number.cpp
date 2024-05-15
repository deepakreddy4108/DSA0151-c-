#include <iostream>

using namespace std;

// Function to calculate the sum of proper divisors of a number
int sumOfDivisors(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; ++i) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

// Function to check if a number is an abundant number
bool isAbundant(int n) {
    return sumOfDivisors(n) > n;
}

int main() {
    int num;

    // Input a number from the user
    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is an abundant number
    if (isAbundant(num)) {
        cout << num << " is an abundant number." << endl;
    } else {
        cout << num << " is not an abundant number." << endl;
    }

    return 0;
}

