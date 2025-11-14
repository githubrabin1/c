#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << " Rabin Ghimire\n";
    cout << "Enter a binary string: ";
    cin >> s;

    int state = 0; // start state
    cout << "State transitions: ";

    for (size_t i = 0; i < s.length(); i++) {
        char c = s[i];
        cout << "q" << state << "->";

        // NFA transitions simplified into one path for display
        if (state == 0) {
            if (c == '0')
                state = 0;
            else
                state = 1;
        } else if (state == 1) {
            if (c == '0')
                state = 2; // substring "10" found
            else
                state = 1;
        } else if (state == 2) {
            state = 2; // stay in accepting state
        }
    }

    if (state == 2)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}

