#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;

// -------------------------------
// URL DECODE FUNCTION (FIXED)
// -------------------------------
string urlDecode(const string& src) {
    string ret;
    char ch;
    int ii;
    for (int i = 0; i < src.length(); i++) {
        if (src[i] == '%') {
            // Decode %xx hex values
            sscanf(src.substr(i + 1, 2).c_str(), "%x", &ii);
            ch = static_cast<char>(ii);
            ret += ch;
            i += 2;
        }
        else if (src[i] == '+') {
            // + means space in URL encoding
            ret += ' ';
        }
        else {
            ret += src[i];
        }
    }
    return ret;
}

// -------------------------------
// READ POST DATA FROM HTML FORM
// -------------------------------
string getPostData() {
    int contentLength = atoi(getenv("CONTENT_LENGTH"));
    string data(contentLength, '\0');
    cin.read(&data[0], contentLength);
    return data;
}

// -------------------------------
// EXTRACT A FIELD FROM POST DATA
// -------------------------------
string getValue(string data, string key) {
    int start = data.find(key + "=");
    if (start == string::npos) return "";
    start += key.length() + 1;

    int end = data.find("&", start);
    if (end == -1) end = data.length();

    return data.substr(start, end - start);
}

// -------------------------------
// MAIN FUNCTION
// -------------------------------
int main() {
    cout << "Content-Type: text/html\n\n";

    // Read raw data from POST
    string post = getPostData();

    // Extract fields and decode them
    string date = urlDecode(getValue(post, "date"));
    string entry = urlDecode(getValue(post, "entry"));

    // Save diary entry to a file
    ofstream file(date + ".txt");
    file << entry;
    file.close();

    // Output response HTML
    cout << "<h2>Diary Saved Successfully for " << date << "</h2>";
    cout << "<a href='/diary.html'>Back</a>";

    return 0;
}
