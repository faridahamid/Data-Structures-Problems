#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int n = s.size();
    int maxLength = 0, start = 0, end = 0;
    bool visit[256] = {false};

    for (int i = 0; i < n; i++) {
        for (int k = 0; k < 256; k++) {
            visit[k] = false;
        }
        for (int j = i; j < n; j++) {
            if (visit[s[j]]) {
                break;
            }
            visit[s[j]] = true;
            if (j - i + 1 > maxLength) {
                maxLength = j - i + 1;
                start = i;
                end = j;
            }
        }
    }

    cout << "Longest substring without repeating characters: ";
    for (int i = start; i <= end; i++) {
        cout << s[i];
    }
    cout << endl << "Length of longest substring: " << maxLength << endl;
    return 0;
}
