#include <bits/stdc++.h>
using namespace std;

class Base {
public:
    virtual void fun(int x = 10) {
        cout << "Base::fun " << x << "\n";
    }

    virtual void show() {
        cout << "Base::show\n";
    }

    ~Base() {
        cout << "Base destructor\n";
    }
};

class Derived : public Base {
public:
    void fun(int x = 20) override {
        cout << "Derived::fun " << x << "\n";
    }

    void show(int y) { // function hiding
        cout << "Derived::show " << y << "\n";
    }

    ~Derived() {
        cout << "Derived destructor\n";
    }
};

int main() {
    Base* b = new Derived();

    b->fun();      // ??
    b->show();     // ??

    delete b;
}