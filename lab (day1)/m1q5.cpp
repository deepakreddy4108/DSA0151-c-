#include <iostream>

using namespace std;

int main() {
    int arr[] = {0, 1, 2, 3, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int missingNumber = 0;

    // Using a WHILE loop to find the smallest missing number
    int i = 0;
    while (i < size) {
        if (arr[i] != missingNumber) {
            break;
        }
        missingNumber++;
        i++;
    }

    cout << "The smallest missing element is " << missingNumber << endl;

    return 0;
}

