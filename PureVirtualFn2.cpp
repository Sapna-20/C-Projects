#include <iostream>
#include <cmath>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure Virtual Functions
    virtual void draw() = 0;
    virtual float area() = 0;
};

// Child class - Circle
class Circle : public Shape {
    float radius;
public:
    Circle(float r) { radius = r; }

    void draw() override {
        cout << "Drawing Circle" << endl;
    }

    float area() override {
        return 3.14 * radius * radius;
    }
};

// Child class - Rectangle
class Rectangle : public Shape {
    float length, breadth;
public:
    Rectangle(float l, float b) { length = l; breadth = b; }

    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }

    float area() override {
        return length * breadth;
    }
};

int main() {
    // Shape s;  //  Not allowed
    
    Shape* shape;

    Circle c(5);
    Rectangle r(4, 6);

    shape = &c;
    shape->draw();
    cout << "Area = " << shape->area() << endl;

    shape = &r;
    shape->draw();
    cout << "Area = " << shape->area() << endl;

    return 0;
}
