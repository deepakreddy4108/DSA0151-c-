#include <iostream>

using namespace std;

// Function to check if a number is a Buzz number
bool isBuzz(int n) {
    return (n % 7 == 0 || n % 10 == 7);
}

int main() {
    int num;

    // Input a number from the user
    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is a Buzz number
    if (isBuzz(num)) {
        cout << num << " is a Buzz number." << endl;
    } else {
        cout << num << " is not a Buzz number." << endl;
    }

    return 0;
}

