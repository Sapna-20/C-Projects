#include <iostream>
using namespace std;

class CourseProgress {
private:
    string studentName;
    int totalModules;
    int completedModules;

    // private helper (hidden logic)
    double calculateProgress() {
        return (double)completedModules / totalModules * 100;
    }

public:
    // Constructor
    CourseProgress(string name, int total) {
        studentName = name;
        totalModules = total;
        completedModules = 0;
    }

    // Controlled update
    void completeModule() {
        if (completedModules < totalModules) {
            completedModules++;
            cout << "Module completed!" << endl;
        } else {
            cout << "All modules already completed." << endl;
        }
    }

    // Getter (no direct access to variables)
    int getCompletedModules() {
        return completedModules;
    }

    // Exposing computed data instead of raw data
    void showProgress() {
        cout << "Student: " << studentName << endl;
        cout << "Progress: " << calculateProgress() << "%" << endl;
    }

    // Validation logic (important for encapsulation)
    void resetProgress() {
        completedModules = 0;
        cout << "Progress reset." << endl;
    }
};

int main() {
    CourseProgress cp("Sapna", 5);

    cp.completeModule();
    cp.completeModule();

    cp.showProgress();

    // cp.completedModules = 10; ❌ Not allowed (private)

    return 0;
}