#include <iostream>

using namespace std;

bool isValid(string s) {
    int len = s.length();
    char openBracket[len];
    int openbracketcount = 0;

    for (int i = 0; i < len; i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            openBracket[++openbracketcount] = s[i];
        } else if (openbracketcount >= 0) {
            if (s[i] == ')' && openBracket[openbracketcount] == '(') {
                openbracketcount--;
            } else if (s[i] == ']' && openBracket[openbracketcount] == '[') {
                openbracketcount--;
            } else if (s[i] == '}' && openBracket[openbracketcount] == '{') {
                openbracketcount--;
            } else {
                return false;
            }
        } else {
            return false;
        }
    }

    return (openbracketcount == 0);
}

int main() {
    string s;
    cout << "Enter a string containing only parentheses, brackets, and curly braces: ";
    cin >> s;
    bool result = isValid(s);
    if (result) {
        cout << "true\n";
    } else {
        cout << "false\n";
    }
    return 0;
}

