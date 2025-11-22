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
    void calculateInterest()  {
        cout << "Saving Account Interest: 4%" << endl;
    }
};

class Current : public Account {
public:
    void calculateInterest() override {
        cout << "Current Account Interest: 0%" << endl;
    }
};

class Loan : public Account {
public:
    void calculateInterest() override {
        cout << "Loan Account Interest: 10%" << endl;
    }
};

int main() {
    Account* acc;
    Account sa;

    Saving s;
    acc = &s; 

    Current c;
    acc = &c;

    Loan l;
    acc = &l; 

    sa.calculateInterest();

    
    acc->calculateInterest();   // Saving wala chalega
     
    acc->calculateInterest();   // Current wala chalega
    
    acc->calculateInterest();   // Loan wala chalega
}
