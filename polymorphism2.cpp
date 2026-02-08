#include <iostream>
using namespace std;

// Base class
class Employee {
public:
    virtual double calculateSalary() {
        return 0; // Default
    }

    virtual void showRole() {
        cout << "I am a general employee." << endl;
    }

    // Virtual destructor (good practice)
    virtual ~Employee() {}
};

// Derived class 1
class FullTimeEmployee : public Employee {
private:
    double monthlySalary;

public:
    FullTimeEmployee(double salary) {
        monthlySalary = salary;
    }

    double calculateSalary() override {
        return monthlySalary;
    }

    void showRole() override {
        cout << "I am a Full-Time Employee." << endl;
    }
};

// Derived class 2
class PartTimeEmployee : public Employee {
private:
    int hoursWorked;
    double hourlyRate;

public:
    PartTimeEmployee(int hours, double rate) {
        hoursWorked = hours;
        hourlyRate = rate;
    }

    double calculateSalary() override {
        return hoursWorked * hourlyRate;
    }

    void showRole() override {
        cout << "I am a Part-Time Employee." << endl;
    }
};

// Derived class 3
class Intern : public Employee {
private:
    double stipend;

public:
    Intern(double stipendAmount) {
        stipend = stipendAmount;
    }

    double calculateSalary() override {
        return stipend;
    }

    void showRole() override {
        cout << "I am an Intern." << endl;
    }
};

int main() {

    // Base class pointer (Polymorphism)
    Employee* e1 = new FullTimeEmployee(50000);
    Employee* e2 = new PartTimeEmployee(80, 300);
    Employee* e3 = new Intern(10000);

    // Runtime Polymorphism
    e1->showRole();
    cout << "Salary: " << e1->calculateSalary() << endl;

    cout << endl;

    e2->showRole();
    cout << "Salary: " << e2->calculateSalary() << endl;

    cout << endl;

    e3->showRole();
    cout << "Salary: " << e3->calculateSalary() << endl;

    // Free memory
    delete e1;
    delete e2;
    delete e3;

    return 0;
}