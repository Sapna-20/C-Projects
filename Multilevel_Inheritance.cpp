#include <iostream>
using namespace std;

class Grandfather {
public:
    void land() {
        cout << "Grandfather owns land" << endl;
    }
};

class Father : public Grandfather {
public:
    void house() {
        cout << "Father built a house" << endl;
    }
};

class Son : public Father {
public:
    void car() {
        cout << "Son bought a car" << endl;
    }
};

int main() {
    Son s;
    s.land();
    s.house();
    s.car();
}
