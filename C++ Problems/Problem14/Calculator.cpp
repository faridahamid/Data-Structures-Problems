#include <iostream>
using namespace std;

int main() {
    bool close_Calculator = false;

    while (!close_Calculator) {
        cout << "Would you like to close the calculator? ";
        string Answer;
        cin >> Answer;

        if (Answer == "yes" || Answer == "YES") {
            close_Calculator = true;
        } else {
            char operation;
            double num1, num2, result;

            cout << "Enter operator either + or - or * or /: ";
            cin >> operation;

            cout << "Enter the first number: ";
            cin >> num1;

            cout << "Enter the second number: ";
            cin >> num2;

            switch(operation) {
                case '+':
                    result = num1 + num2;
                    cout << "Addition result = " << result << endl;
                    break;

                case '-':
                    result = num1 - num2;
                    cout << "Subtraction result = " << result << endl;
                    break;

                case '*':
                    result = num1 * num2;
                    cout << "Multiplication result = " << result << endl;
                    break;

                case '/':
                    if (num2 == 0) {
                        cout << "Error: Division by zero." << endl;
                    } else {
                        result = num1 / num2;
                        cout << "Division result = " << result << endl;
                    }
                    break;

                default:
                    cout << "Error: Invalid operator." << endl;
                    break;
            }
        }
    }

    return 0;
}
