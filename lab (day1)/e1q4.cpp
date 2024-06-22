#include <iostream>

using namespace std;

int main() {
    double celsius, fahrenheit;

    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    cout << "The temperature in Fahrenheit is: " << fahrenheit << endl;

    return 0;
}

