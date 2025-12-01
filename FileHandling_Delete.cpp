#include <iostream>
#include <cstdio>  // for remove()
using namespace std;

int main() {
    string filename = "marks.txt";

    if (remove(filename.c_str()) == 0) {
        cout << "File " << filename << " deleted successfully ✅" << endl;
    } else {
        cout << "Error deleting the file " << endl;
    }

    return 0;
}

