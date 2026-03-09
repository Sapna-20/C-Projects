#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box() {
        length = 10;
    }

    // friend function declaration
    friend void showLength(Box b);
};

// friend function definition
void showLength(Box b) {
    cout << "Length of box: " << b.length << endl;
}

int main() {
    Box b1;
    showLength(b1);
    return 0;
}