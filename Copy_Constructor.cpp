#include <iostream>
using namespace std;

class Student {
    int age;
public:
    // Normal constructor
    Student(int a) {
        age = a;
        cout << "Normal constructor called" << endl;
    }

    // Copy constructor
    Student(const Student &s) {
        age = s.age;
        cout << "Copy constructor called" << endl;
    }

    void display() {
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1(20);   // Normal constructor called
    Student s2 = s1;  // Copy constructor called (automatic)

    cout << "Object s1 -> ";
    s1.display();

    cout << "Object s2 -> ";
    s2.display();

    return 0;
}
