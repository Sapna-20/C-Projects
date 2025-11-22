#include <iostream>
using namespace std;

class Bank {
private:
    int balance;

public:
    Bank(int b) {
        balance = b;
    }

    // Friend function declared
    friend void audit(Bank b);
};

// Auditor function (outsider but friend)
void audit(Bank b) {
    cout << "Auditor checking balance: " << b.balance << endl;
}

int main() {
    Bank customer1(5000);

    // Auditor can check directly because he is friend
    audit(customer1);

    return 0;
}
