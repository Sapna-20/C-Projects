#include <iostream>
using namespace std;

class Base {
protected:
    int x;

public:
    Base(int a) {
        x = a;
    }

    // virtual function
    virtual void display() {
        cout << "Base class display: " << x << endl;
    }

    // friend function declaration
    friend void showValue(Base &b);
};

class Derived : public Base {
public:
    Derived(int a) : Base(a) {}

    // overriding virtual function
    void display() {
        cout << "Derived class display: " << x << endl;
    }
};

// friend function definition
void showValue(Base &b) {
    cout << "Friend function accessing private/protected value: " << b.x << endl;
}

int main() {

    Base *ptr;
    Derived d(50);

    ptr = &d;

    // virtual function call
    ptr->display();

    // friend function call
    showValue(d);

    return 0;
}