#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    try {
        if (num2 == 0) {
            // if denominator is 0, throw an exception
            throw "Division by zero not allowed!";
        }
        cout << "Result = " << (num1 / num2) << endl;
    }
    catch (const char* msg) {
        // exception is caught here
        cout << "Error: " << msg << endl;
    }

    cout << "Program continues..." << endl;
    return 0;
}
