/*
#include <iostream>
using namespace std;

double calculateElectricityBill(int consumption) {
    double bill = 0.0;

    if (consumption <= 50) {
        bill = consumption * 0.13;
    } else if (consumption <= 100) {
        bill = 50 * 0.13 + (consumption - 50) * 0.22;
    } else if (consumption <= 200) {
        bill = 50 * 0.13 + 50 * 0.22 + (consumption - 100) * 0.27;
    } else if (consumption <= 350) {
        bill = 50 * 0.13 + 50 * 0.22 + 100 * 0.27 + (consumption - 200) * 0.55;
    } else if (consumption <= 650) {
        bill = 50 * 0.13 + 50 * 0.22 + 100 * 0.27 + 150 * 0.55 + (consumption - 350) * 0.75;
    } else if (consumption <= 1000) {
        bill = 50 * 0.13 + 50 * 0.22 + 100 * 0.27 + 150 * 0.55 + 300 * 0.75 + (consumption - 650) * 1.25;
    } else {
        bill = 50 * 0.13 + 50 * 0.22 + 100 * 0.27 + 150 * 0.55 + 300 * 0.75 + 350 * 1.25 + (consumption - 1000) * 1.35;
    }

    return bill;
}

int main() {
    double consumption, bill;
    cout << "Enter your electricity consumption in KW: ";
    cin >> consumption;

    bill = calculateElectricityBill(consumption);

    cout << "Your electricity bill is: " << bill << " LE" << endl;

    return 0;
}
*/
#include <iostream>
using namespace std;

double calculateElectricityBill(int consumption) {
    double bill = 0;
    int remainingConsumption = consumption;

    if (remainingConsumption >= 1000) {
        bill += (remainingConsumption - 1000) * 0.135;
        remainingConsumption = 1000;
    }

    if (remainingConsumption >= 650) {
        bill += (remainingConsumption - 650) * 0.125;
        remainingConsumption = 650;
    }

    if (remainingConsumption >= 350) {
        bill += (remainingConsumption - 350) * 0.75;
        remainingConsumption = 350;
    }

    if (remainingConsumption >= 200) {
        bill += (remainingConsumption - 200) * 0.55;
        remainingConsumption = 200;
    }

    if (remainingConsumption >= 100) {
        bill += (remainingConsumption - 100) * 0.27;
        remainingConsumption = 100;
    }

    if (remainingConsumption >= 50) {
        bill += (remainingConsumption - 50) * 0.22;
        remainingConsumption = 50;
    }

    bill += remainingConsumption *0.13;

    return bill;
}

int main() {
    int consumption;
    cout << "Enter your consumption in KW: ";
    cin >> consumption;
    double bill = calculateElectricityBill(consumption);
    cout << "Your electricity bill is: " << bill << " LE" << endl;
    return 0;
}




