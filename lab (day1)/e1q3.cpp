#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int number) {
    if (number <= 1) return false;
    if (number == 2) return true; // 2 is the only even prime number
    if (number % 2 == 0) return false; // other even numbers are not prime

    for (int i = 3; i <= sqrt(number); i += 2) {
        if (number % i == 0) return false;
    }
    return true;
}

int main() {
    int number;

    cout << "Enter the number: ";
    cin >> number;

    if (isPrime(number)) {
        cout << number << " is prime" << endl;
    } else {
        cout << number << " is not prime" << endl;
    }

    return 0;
}

