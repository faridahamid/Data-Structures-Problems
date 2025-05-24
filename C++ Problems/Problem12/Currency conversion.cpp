#include <iostream>
using namespace std;

int main() {
    char currency;
    double selling_Price, buying_Price, amount, result;

    cout << "Enter one of the following currencies: * Euro $ Dollar + British Pound Y yen R Riyal $" << endl;
    cin >> currency;

    cout << "Enter the selling price: ";
    cin >> selling_Price;

    cout << "Enter the buying price: ";
    cin >> buying_Price;

    int action;
    cout << "Would you like to buy or sell (0 for buy, 1 for sell): ";
    cin >> action;

    cout << "Please enter the amount: ";
    cin >> amount;

    if (action == 0) {
        result = amount * selling_Price;
        cout << "You will get " << result << " EGP" << endl;
    } else {
        result = amount * buying_Price;
        cout << "You will get " << result << " " << currency << endl;
    }

    return 0;
}

