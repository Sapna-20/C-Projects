#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function
    virtual void draw() {
        cout << "Drawing a Shape" << endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle" << endl;
    }
};

int main() {
    Shape* s1;   // Base class pointer

    Circle c;
    Rectangle r;

    s1 = &c;
    s1->draw();   // Calls Circle's draw()

    s1 = &r;
    s1->draw();   // Calls Rectangle's draw()

    return 0;
}