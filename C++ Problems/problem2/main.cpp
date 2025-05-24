#include <iostream>
using namespace std;

void arraySum(int arr1[], int arr2[], int sum[], int size) {
    for (int i = 0; i < size; i++) {
        sum[i] = arr1[i] + arr2[i];
    }
}

int main() {
    const int size = 5;
    int arr1[size], arr2[size], sum[size];

    cout << "Enter first array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr1[i];
    }

    cout << "Enter second array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr2[i];
    }

    arraySum(arr1, arr2, sum, size);

    cout << "The sum of the two arrays is:" << endl;
    for (int i = 0; i < size; i++) {
        cout << sum[i] << " ";
    }
    cout << endl;

    return 0;
}

