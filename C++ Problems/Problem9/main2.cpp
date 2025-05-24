
#include <iostream>
using namespace std;

bool ValidMatrix(int** matrix, int n) {
    for (int i = 0; i < n; i++) {
        int* row = new int[n];
        for (int j = 0; j < n; j++) {
            int number = matrix[i][j];
            if (number < 1 || number > n || row[number - 1] == 1) {
                delete[] row;
                return false;
            }
            row[number - 1] = 1;
        }
        delete[] row;
    }


    for (int j = 0; j < n; j++) {
        int* col = new int[n];
        for (int i = 0; i < n; i++) {
            int number = matrix[i][j];
            if (number < 1 || number > n || col[number - 1] == 1) {
                delete[] col;
                return false;
            }
            col[number - 1] = 1;
        }
        delete[] col;
    }

    return true;
}

int main() {
    int n;
   cout << "Enter the size of the matrix: ";
    cin >> n;

    int** matrix = new int*[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
        cout << "Enter elements for row " << (i + 1) << ": ";
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    bool isValid = ValidMatrix(matrix, n);
    cout << "The matrix is " << (isValid ? "valid" : "invalid") <<endl;
    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
