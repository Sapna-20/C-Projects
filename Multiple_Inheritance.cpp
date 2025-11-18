#include <iostream>
using namespace std;

class Mother {
public:
    void cook() {
        cout << "Mother cooks" << endl;
    }
};

class Father {
public:
    void drive() {
        cout << "Father drives" << endl;
    }
};

// Child inherits both
class Child : public Mother, public Father {
public:
    void study() {
        cout << "Child studies" << endl;
    }
};

int main() {
    Child c;
    c.cook();
    c.drive();
    c.study();
}
