#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

// Function to parse POST data
map<string, string> parseFormData(string data)
{
    map<string, string> form;
    size_t pos = 0;
    while ((pos = data.find("&")) != string::npos)
    {
        string token = data.substr(0, pos);
        size_t eq = token.find("=");
        if (eq != string::npos)
            form[token.substr(0, eq)] = token.substr(eq + 1);
        data.erase(0, pos + 1);
    }
    size_t eq = data.find("=");
    if (eq != string::npos)
        form[data.substr(0, eq)] = data.substr(eq + 1);
    return form;
}

int main()
{
    cout << "Content-type:text/html\n\n"; // Required CGI header

    // Read POST data
    string data;
    getline(cin, data);

    map<string, string> form = parseFormData(data);

    // Save into file
    ofstream file("c:/wamp64/www/student_info.txt", ios::app);
    file << "Name: " << form["name"] << endl;
    file << "Father's Name: " << form["father"] << endl;
    file << "Roll No: " << form["rollno"] << endl;
    file << "Phone No: " << form["phone"] << endl;
    file << "---------------------------" << endl;
    file.close();

    // Output back to browser
    cout << "<h2>Data Saved Successfully!</h2>";
    cout << "<p>Thank you, " << form["name"] << ".</p>";

    return 0;
}
