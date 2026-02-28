#include <iostream>
using namespace std;

/*
   Base class: Common security system
*/
class SecuritySystem {
protected:
    string name;

public:
    SecuritySystem(string n) {
        name = n;
    }

    void login() {
        cout << name << " login successful" << endl;
    }

    void logout() {
        cout << name << " logged out" << endl;
    }
};

/*
   Derived class: Firewall
*/
class Firewall : public SecuritySystem {
public:
    Firewall() : SecuritySystem("Firewall") {}

    void blockIP(string ip) {
        cout << "Firewall blocked IP: " << ip << endl;
    }
};

/*
   Derived class: Antivirus
*/
class Antivirus : public SecuritySystem {
public:
    Antivirus() : SecuritySystem("Antivirus") {}

    void scan() {
        cout << "Antivirus scanning system..." << endl;
    }
};

/*
   Derived class: Penetration Testing Tool
*/
class PentestTool : public SecuritySystem {
public:
    PentestTool() : SecuritySystem("Pentest Tool") {}

    void findVulnerability() {
        cout << "Searching for security holes..." << endl;
    }
};

int main() {

    Firewall f;
    Antivirus a;
    PentestTool p;

    // Using inherited functions
    f.login();
    f.blockIP("10.0.0.5");
    f.logout();

    cout << endl;

    a.login();
    a.scan();
    a.logout();

    cout << endl;

    p.login();
    p.findVulnerability();
    p.logout();

    return 0;
}