#include <iostream>
using namespace std;

class Teacher {
public:
    void teach() {
        cout << "I can teach " << endl;
    }
};

class MathTeacher : public Teacher {
public:
    void math() {
        cout << "I teach Math " << endl;
    }
};

class ScienceTeacher : public Teacher {
public:
    void science() {
        cout << "I teach Science " << endl;
    }
};

int main() {
    MathTeacher mt;
    ScienceTeacher st;
    mt.teach();
    mt.math();
    st.teach(); st.science();
}
