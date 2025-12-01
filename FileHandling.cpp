#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string name, fatherName, rollNo, phone;

    // Take input from user
    cout << "Enter your Name: ";
    getline(cin, name);

    cout << "Enter your Father's Name: ";
    getline(cin, fatherName);

    cout << "Enter your Roll Number: ";
    getline(cin, rollNo);

    cout << "Enter your Phone Number: ";
    getline(cin, phone);

    // Create and open a file
    ofstream myFile("student_info.txt", ios::app);
    // ios::app → append mode (so new data adds, not overwrite)

    // Write data into file
    myFile << "Name: " << name << endl;
    myFile << "Father's Name: " << fatherName << endl;
    myFile << "Roll No: " << rollNo << endl;
    myFile << "Phone No: " << phone << endl;
    myFile << "---------------------------" << endl;

    // Close the file
    myFile.close();

    cout << "Data has been stored in student_info.txt successfully!" << endl;

    return 0;
}

