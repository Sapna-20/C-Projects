#include <iostream>
using namespace std;

// Template class for Admission
template <typename T1, typename T2, typename T3, typename T4>

class Admission {
private:
    T1 name;
    T2 fatherName;
    T3 classPassout;
    T4 stream;

public:
    // Constructor
    Admission(T1 n, T2 fName, T3 cPassout, T4 s) {
        name = n;
        fatherName = fName;
        classPassout = cPassout;
        stream = s;
    }

    // Function to display admission details
    void display() {
        cout << "Name: " << name << endl;
        cout << "Father's Name: " << fatherName << endl;
        cout << "Class Passout: " << classPassout << endl;
        cout << "Stream: " << stream << endl;
    }
};

int main() {
    // Example 1: All as strings
    Admission<string, string, string, string> student1("Sapna Baranwal", "Mr. Baranwal", "2025", "Science");
    student1.display();

    cout << "\n";

    // Example 2: Mixed types
    Admission<string, string, int, string> student2("Rahul Kumar", "Mr. Kumar", 2024, "Commerce");
    student2.display();

    return 0;
}
