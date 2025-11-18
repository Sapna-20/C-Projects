#include <iostream>
using namespace std;

class Grandparent {
public:
    void land() {
        cout << "Grandparent's land" << endl;
    }
};

// virtual inheritance solves diamond problem
class Father : virtual public Grandparent {};
class Uncle : virtual public Grandparent {};

class Child : public Father, public Uncle {};

int main() {
    Child c;
    c.land();  // only one copy of land()
}
