#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    for (int i = 0; i < size/2; i++) {
        int x = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = x;
    }
}

int main() {
    const int size = 5;
    int arr[size];

    cout << "Enter the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    reverseArray(arr, size);

    cout << "The reversed array is:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

