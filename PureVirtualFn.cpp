#include <iostream>
using namespace std;

// Abstract Class
class Account {
public:
    int accNo;
    string name;
    float balance;

    // Pure Virtual Function
    virtual void calculateInterest() = 0; 
};

// Child class - Saving Account
class SavingAccount : public Account {
public:
    void calculateInterest() override {
        cout << "Saving Account Interest = 4%" << endl;
    }
};

// Child class - Current Account
class CurrentAccount : public Account {
public:
    void calculateInterest() override {
        cout << "Current Account Interest = 0%" << endl;
    }
};

int main() {
    //Account a;   //  Not allowed (abstract class)
    
    SavingAccount s;
    CurrentAccount c;

    Account* acc;   // pointer of abstract class allowed

    acc = &s;
    acc->calculateInterest();  // Output: Saving Account Interest = 4%

    acc = &c;
    acc->calculateInterest();  // Output: Current Account Interest = 0%

    return 0;
}
