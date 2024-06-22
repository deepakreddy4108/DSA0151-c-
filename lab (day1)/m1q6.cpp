#include <iostream>

using namespace std;

int main() {
    int n, number, sum = 0;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> number;
        sum += number;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}

