#include <iostream>

using namespace std;

int main() {
    int n, number, sum = 0, count = 0;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the numbers: ";
    while (count < n) {
        cin >> number;
        sum += number;
        count++;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}

