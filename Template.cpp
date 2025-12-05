#include <iostream>
using namespace std;

// Template function
template <class X>
X big(X a, X b) {
    return (a > b) ? a : b;
}



int main() {
    cout << big(4, 5) << endl;      // Works for int → prints 5
    cout << big(5.6, 3.4) << endl;  // Works for double → prints 5.6
    cout<< big(5.89765, 6.548903);
}
