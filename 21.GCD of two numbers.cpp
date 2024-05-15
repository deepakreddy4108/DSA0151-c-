#include <iostream>
using namespace std;
int main() {
	int num1, num2;
	cout << " enter the first number: ";
	cin >> num1;
	cout << " enter the second number: ";
	cin >> num2;
	int gcd;
	do {
		if (num1 > num2) {
			num1 = num1 - num2;
		} else {
			num2 = num2 - num1;
		}
	} while ( num1 != num2);
	gcd = num1;
	cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << endl;
	return 0;
}
