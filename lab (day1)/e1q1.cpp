#include <iostream>
#include <string>
#include <algorithm> // For transform function

using namespace std;

class StringConverter {
public:
    // Constructor to initialize the string
    StringConverter(string str) : inputString(str) {}

    // Method to convert string to uppercase
    string toUpperCase() {
        string upperString = inputString;
        transform(upperString.begin(), upperString.end(), upperString.begin(), ::toupper);
        return upperString;
    }

    // Method to convert string to lowercase
    string toLowerCase() {
        string lowerString = inputString;
        transform(lowerString.begin(), lowerString.end(), lowerString.begin(), ::tolower);
        return lowerString;
    }

private:
    string inputString; // Member variable to store the input string
};

int main() {
    string userInput;

    cout << "Enter the string: ";
    getline(cin, userInput);

    // Create an object of StringConverter class
    StringConverter converter(userInput);

    // Convert and display the string in uppercase
    cout << "The string in upper case: " << converter.toUpperCase() << endl;

    // Convert and display the string in lowercase
    cout << "The string in lower case: " << converter.toLowerCase() << endl;

    return 0;
}

