#include <iostream>
using namespace std;

// Base class (Parent)
class Parent {
public:
    void home() {
        cout << "Parent: I own a house " << endl;
    }
};

// Derived class (Child inherits Parent)
class Child : public Parent {
public:
    void car() {
        cout << "Child: I bought a car " << endl;
    }
};

int main() {
    Child c1;
    c1.home(); // Inherited from Parent
    c1.car();  // Child's own property
    return 0;
}
