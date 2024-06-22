#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Enter the number: ";
    cin >> number;

    // Check if the number is even or odd
    if (number % 2 == 0) {
        cout << "The number is Even" << endl;
    } else {
        cout << "The number is Odd" << endl;
    }

    return 0;
}

