#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char op;
    bool first = true;

    while (true) {

        if (first) {
            cout << "\nEnter first number: ";
            while (!(cin >> num1)) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid number! Enter again: ";
            }
            first = false;
        }
        else {
            cout << "\nPrevious result: " << num1 << "\n";
            cout << "Using it as first number...\n";
        }

        cout << "Enter operator (+, -, *, /): ";
        cin >> op;

        while (op != '+' && op != '-' && op != '*' && op != '/') {
            cout << "Invalid operator! Try again: ";
            cin >> op;
        }

        cout << "Enter second number: ";
        while (!(cin >> num2)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid number! Enter again: ";
        }

        if (op == '+') result = num1 + num2;
        else if (op == '-') result = num1 - num2;
        else if (op == '*') result = num1 * num2;
        else {
            if (num2 == 0) {
                cout << "Cannot divide by zero!\n";
                continue;
            }
            result = num1 / num2;
        }

        cout << "Result: " << result << endl;

        num1 = result; // use result for next calculation
    }

    return 0;
}
