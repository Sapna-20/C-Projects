#include <iostream>
using namespace std;

class Student {
    int* marks;   // pointer

public:
    // Constructor allocates memory
    Student(int m) {
        marks = new int;   // dynamic memory
        *marks = m;
        cout << "Constructor: Memory allocated for marks" << endl;
    }

    // Destructor frees memory
    ~Student() {
        delete marks;   // free the memory
        cout << "Destructor: Memory freed" << endl;
    }

    void display() {
        cout << "Marks: " << *marks << endl;
    }
};

int main() {
    Student s1(95);   // constructor called
    s1.display();

    // when main ends, destructor automatically called
    return 0;
}
