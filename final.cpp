#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct TAC {
    string op, arg1, arg2, result;
};

int main() {
    cout << "Diwas Khanal\n\n";
    int n;
    cout << "Enter number of three-address code statements: ";
    cin >> n;

    vector<TAC> code(n);
    cout << "Enter TAC in format: result = arg1 op arg2 (use op as +,-,*,/, or '=' for assignment)\n";
    for (int i = 0; i < n; i++) {
        cin >> code[i].result >> code[i].op >> code[i].arg1;
        if (code[i].op != "=") cin >> code[i].arg2;
    }

    cout << "\n--- Final Assembly Code ---\n";
    for (auto &c : code) {
        if (c.op == "=") {
            cout << "MOV " << c.result << ", " << c.arg1 << "\n";
        } else if (c.op == "+") {
            cout << "MOV R0, " << c.arg1 << "\n";
            cout << "ADD R0, " << c.arg2 << "\n";
            cout << "MOV " << c.result << ", R0\n";
        } else if (c.op == "-") {
            cout << "MOV R0, " << c.arg1 << "\n";
            cout << "SUB R0, " << c.arg2 << "\n";
            cout << "MOV " << c.result << ", R0\n";
        } else if (c.op == "*") {
            cout << "MOV R0, " << c.arg1 << "\n";
            cout << "MUL R0, " << c.arg2 << "\n";
            cout << "MOV " << c.result << ", R0\n";
        } else if (c.op == "/") {
            cout << "MOV R0, " << c.arg1 << "\n";
            cout << "DIV R0, " << c.arg2 << "\n";
            cout << "MOV " << c.result << ", R0\n";
        }
    }
    return 0;
}
