#include <iostream>
using namespace std;

class Account {
public:
    virtual void calculateInterest() {
        cout << "Generic account interest" << endl;
    }
};

class Saving : public Account {
public:
    void calculateInterest() override {
        cout << "Saving Account Interest: 4%" << endl;
    }

    // Special function to call parent version
    void callParentVersion() {
        Account::calculateInterest();   //  Direct parent call
    }
};

int main() {
    Saving s;

    cout << "Child override: ";
    s.calculateInterest();   //  Saving Account Interest

    cout << "Parent version: ";
    s.callParentVersion();   //  Generic account interest
}
