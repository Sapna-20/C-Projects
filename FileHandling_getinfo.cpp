#include <iostream>
#include <fstream>
#include <sys/stat.h>  // for file information
using namespace std;

int main() {
    string filename = "marks.txt";

    // check if file exists
    ifstream file(filename);
    if (file) {
        cout << "File " << filename << " exists " << endl;

        // get file size
        struct stat fileInfo;
        if (stat(filename.c_str(), &fileInfo) == 0) {
            cout << "File size: " << fileInfo.st_size << " bytes" << endl;
        }
    } else {
        cout << "File " << filename << " does not exist " << endl;
    }
    file.close();

    return 0;
}

