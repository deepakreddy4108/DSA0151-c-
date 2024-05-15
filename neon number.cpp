#include <iostream>

using namespace std;

// Function to check if a number is a neon number
bool isNeon(int n) {
    int square = n * n;
    int sum = 0;
    
    // Calculate the sum of digits of the square
    while (square != 0) {
        sum += square % 10;
        square /= 10;
    }

    return sum == n;
}

int main() {
    int num;

    // Input a number from the user
    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is a neon number
    if (isNeon(num)) {
        cout << num << " is a neon number." << endl;
    } else {
        cout << num << " is not a neon number." << endl;
    }

    return 0;
}

