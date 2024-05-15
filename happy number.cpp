#include <iostream>
#include <unordered_set>

using namespace std;

// Function to calculate the sum of squares of digits of a number
int digitSquareSum(int n) {
    int sum = 0;
    while (n != 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

// Function to check if a number is a happy number
bool isHappy(int n) {
    unordered_set<int> visited;
    while (n != 1 && visited.find(n) == visited.end()) {
        visited.insert(n);
        n = digitSquareSum(n);
    }
    return n == 1;
}

int main() {
    int num;

    // Input a number from the user
    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is a happy number
    if (isHappy(num)) {
        cout << num << " is a happy number." << endl;
    } else {
        cout << num << " is not a happy number." << endl;
    }

    return 0;
}

