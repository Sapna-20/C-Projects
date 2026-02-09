#include <iostream>
#include <string>
using namespace std;

class BankAccount {

private:
    string accountHolder;
    int accountNumber;
    double balance;

    // Private helper function (cannot be accessed outside)
    bool isValidAmount(double amount) {
        return amount > 0;
    }

public:
    // Constructor
    BankAccount(string name, int accNo, double initialBalance) {

        accountHolder = name;
        accountNumber = accNo;

        if (initialBalance >= 0)
            balance = initialBalance;
        else
            balance = 0;
    }

    // Getter (Read Only Access)
    string getName() {
        return accountHolder;
    }

    int getAccountNumber() {
        return accountNumber;
    }

    double getBalance() {
        return balance;
    }

    // Setter / Modifier (Controlled Access)
    void deposit(double amount) {

        if (isValidAmount(amount)) {
            balance += amount;
            cout << "Deposit Successful: " << amount << endl;
        } 
        else {
            cout << "Invalid Deposit Amount!" << endl;
        }
    }

    void withdraw(double amount) {

        if (!isValidAmount(amount)) {
            cout << "Invalid Withdraw Amount!" << endl;
            return;
        }

        if (amount > balance) {
            cout << "Insufficient Balance!" << endl;
            return;
        }

        balance -= amount;
        cout << "Withdraw Successful: " << amount << endl;
    }

    void showAccountInfo() {

        cout << "\n--- Account Details ---" << endl;
        cout << "Name: " << accountHolder << endl;
        cout << "Account No: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {

    BankAccount user1("Rahul Sharma", 1001, 5000);

    // ❌ Not Allowed (Private Data)
    // user1.balance = 10000;   // ERROR

    user1.showAccountInfo();

    user1.deposit(2000);
    user1.withdraw(1500);

    user1.withdraw(10000);   // Wrong case

    user1.deposit(-500);     // Wrong case

    user1.showAccountInfo();

    return 0;
}