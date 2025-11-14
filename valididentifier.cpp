#include <bits/stdc++.h>
using namespace std;

bool isValid(string str) {
    if (str.empty()) return false;  // empty string is not valid

    // Check first character
    if (!((str[0] >= 'a' && str[0] <= 'z') ||
          (str[0] >= 'A' && str[0] <= 'Z') ||
           str[0] == '_'))
        return false;

    // Check remaining characters
    for (int i = 1; i < str.length(); i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z') ||
              (str[i] >= 'A' && str[i] <= 'Z') ||
              (str[i] >= '0' && str[i] <= '9') ||
               str[i] == '_'))
            return false;
    }

    return true;
}

int main() {
	cout <<"Rabin Ghimire\n";
    string str;
    cout << "Enter an identifier: ";
    cin >> str;

    if (isValid(str))
        cout << str << " is a Valid identifier\n";
    else
        cout << str << " is an Invalid identifier\n";

    return 0;
}

