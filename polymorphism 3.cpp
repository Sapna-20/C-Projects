#include <iostream>
#include <string>
using namespace std;

class UserAccount {

private:
    string username;
    string password;   // Hidden (Encapsulated)
    bool isLoggedIn;

    // Private password checker
    bool verifyPassword(string input) {
        return input == password;
    }

public:

    // Constructor
    UserAccount(string user, string pass) {

        username = user;

        if (pass.length() >= 6)
            password = pass;
        else
            password = "default123";   // Safe password

        isLoggedIn = false;
    }

    // Getter (Read Only)
    string getUsername() {
        return username;
    }

    bool getLoginStatus() {
        return isLoggedIn;
    }

    // Login Function
    bool login(string inputPass) {

        if (verifyPassword(inputPass)) {
            isLoggedIn = true;
            cout << "Login Successful!" << endl;
            return true;
        }

        cout << "Wrong Password!" << endl;
        return false;
    }

    // Change Password (Controlled)
    void changePassword(string oldPass, string newPass) {

        if (!isLoggedIn) {
            cout << "Login First!" << endl;
            return;
        }

        if (!verifyPassword(oldPass)) {
            cout << "Old Password Incorrect!" << endl;
            return;
        }

        if (newPass.length() < 6) {
            cout << "Password Too Short!" << endl;
            return;
        }

        password = newPass;
        cout << "Password Changed Successfully!" << endl;
    }

    // Logout
    void logout() {

        if (isLoggedIn) {
            isLoggedIn = false;
            cout << "Logged Out!" << endl;
        } 
        else {
            cout << "Already Logged Out!" << endl;
        }
    }
};

int main() {

    UserAccount user1("sapna99", "mypassword");

    cout << "User: " << user1.getUsername() << endl;

    // ❌ Not Allowed
    // user1.password = "hack123";   // ERROR

    user1.login("wrongpass");     // Fail

    user1.login("mypassword");    // Success

    user1.changePassword("mypassword", "newpass");   // Fail (short)

    user1.changePassword("mypassword", "newpass123"); // Success

    user1.logout();

    return 0;
}