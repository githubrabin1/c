#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Rabin Ghimire\n";

    string s;
    cout << "Enter a string: ";
    cin >> s;

    int state = 0;
    int i = 0;
    char c;

    while (i < s.length()) {
        c = s[i++];

        switch(state) {
            case 0: // start state
                if(c == 'a') state = 1;      // could be a* or a*b+
                else if(c == 'b') state = 2; // a*b+
                else state = 6;              // invalid
                break;

            case 1: // after seeing 'a'
                if(c == 'a') state = 1;      // still a*
                else if(c == 'b') state = 2; // a*b+
                else state = 6;
                break;

            case 2: // after seeing first 'b'
                if(c == 'b') state = 3;      // could be abb or a*b+
                else if(c == 'a') state = 6; // invalid
                else state = 6;
                break;

            case 3: // after seeing "bb"
                if(c == 'b') state = 4;      // a*b+ more b's
                else if(c == 'a') state = 6; // invalid
                else state = 6;
                break;

            case 4: // more b's for a*b+
                if(c == 'b') state = 4;      // stay in same
                else if(c == 'a') state = 6;
                else state = 6;
                break;

            case 6: // error state
                cout << s << " is not recognized.\n";
                return 0;
        }
    }

    // Determine which rule the string belongs to
    if(s == "abb") {
    cout << s << " is acceptable under rule 'abb'\n";
	} 
	else if((state == 0 || state == 1) && s != "abb") {
	    cout << s << " is acceptable under rule 'a*'\n";
	} 
	else if((state == 2 || state == 3 || state == 4) && s != "abb") {
	    cout << s << " is acceptable under rule 'a*b+'\n";
	} 
	else {
	    cout << s << " is not recognized.\n";
	}


    return 0;
}

