#include <iostream>
#include <string>

using namespace std;

int main() {
    string com;
    int a = 0;
    cout<<"Rabin Ghimire"<<endl;
    cout << "Enter comment: ";
    getline(cin, com);

    if (com.length() >= 2 && com[0] == '/') {
        if (com[1] == '/') {
            cout << "It is a comment\n";
        }
        else if (com[1] == '*') {
            // Look for closing */
            size_t pos = com.find("*/", 2);
            if (pos != string::npos) {
                cout << "It is a comment\n";
            } else {
                cout << "It is not a comment\n";
            }
        } else {
            cout << "It is not a comment\n";
        }
    } else {
        cout << "It is not a comment\n";
    }

    return 0;
}
