#include <iostream>
using namespace std;

int main() {
    int num, a = 0, b = 1, c;
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> num;

    for (int i = 1; i <= num; ++i) {
        if (i == 1) {
            c = 1;
            continue;
        }
        c = a + b;
        a = b;
        b = c;
    }

    cout << "The " << num << "th term in the Fibonacci series is: " << c;
    return 0;
}

