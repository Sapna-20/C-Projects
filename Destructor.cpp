#include <iostream>
using namespace std;

class Student {
public:
    // Constructor
    Student() {
        cout << "Constructor called: Object created" << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called: Object destroyed" << endl;
    }
};

int main() {
    cout << "Inside main function" << endl;
    Student s1;   // constructor runs here
    cout << "Exiting main function" << endl;

    return 0;  // when main ends, destructor runs automatically
}
