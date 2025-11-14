#include <iostream>
#include <string>
using namespace std;

// Function to simulate DFA recognizing strings ending with "101"
bool simulateDFA(const string& str) {
    int state = 0; // Start state
    for (char ch : str) {
        switch (state) {
            case 0:
                if (ch == '1') state = 1;
                else if (ch == '0') state = 0;
                else return false; // Invalid character
                break;
            case 1:
                if (ch == '0') state = 2;
                else if (ch == '1') state = 1;
                else return false;
                break;
            case 2:
                if (ch == '1') state = 3;
                else if (ch == '0') state = 0;
                else return false;
                break;
            case 3:
                if (ch == '1') state = 1;
                else if (ch == '0') state = 2;
                else return false;
                break;
        }
    }
    // Accept if final state is 3 (string ends with "101")
    return state == 3;
}

int main() {
    cout << " Rabin Ghimire\n\n";
    cout << "Enter a binary string: ";
    string input;
    cin >> input;

    if (simulateDFA(input))
        cout << "Accepted: The string ends with 101." << endl;
    else
        cout << "Rejected: The string does not end with 101." << endl;

    return 0;
}
