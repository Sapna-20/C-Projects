#include <iostream>
using namespace std;

class TV {
public:
    virtual void on() {
        cout << "Generic TV On\n";
    }
};

class SamsungTV : public TV {
public:
    void on() override {
        cout << "Samsung TV On\n";
    }
};

class SonyTV : public TV {
public:
    void on() override {
        cout << "Sony TV On\n";
    }
};

class LGTV : public TV {
public:
    void on() override {
        cout << "LG TV On\n";
    }
};

int main() {
    // Universal Remote = parent pointer
    TV* remote;

    SamsungTV samsung;
    SonyTV sony;
    LGTV lg;

    // Remote Samsung TV ke liye
    remote = &samsung;
    remote->on();  // Samsung TV On

    // Remote Sony TV ke liye
    remote = &sony;
    remote->on();  // Sony TV On

    // Remote LG TV ke liye
    remote = &lg;
    remote->on();  // LG TV On
}
