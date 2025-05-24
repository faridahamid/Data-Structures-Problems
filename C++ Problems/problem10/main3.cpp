#include <iostream>
using namespace std;
int** matrixTranspose(int** mat1, int row, int col) {

    int** resultMatrix = new int*[col];
    for (int i = 0; i < col; i++) {
        resultMatrix[i] = new int[row];
    }


    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            resultMatrix[j][i] = mat1[i][j];
        }
    }

    return resultMatrix;
}

int main() {
    int rowsofMatrix, colsofMatrix;
    cout << "Enter the number of rows of the matrix: ";
    cin >> rowsofMatrix;
    cout << "Enter the number of columns of the matrix: ";
    cin >> colsofMatrix;


    int** matrix = new int*[rowsofMatrix];
    for (int i = 0; i < rowsofMatrix; i++) {
        matrix[i] = new int[colsofMatrix];
    }


    cout << "Enter the elements of the matrix:" <<endl;
    for (int i = 0; i < rowsofMatrix; i++) {
        for (int j = 0; j < colsofMatrix; j++) {
            cin >> matrix[i][j];
        }
    }

    int** resultMatrix = matrixTranspose(matrix, rowsofMatrix, colsofMatrix);
    cout << "The transpose of the matrix is:" <<endl;
    for (int i = 0; i < colsofMatrix; i++) {
        for (int j = 0; j < rowsofMatrix; j++) {
            cout << resultMatrix[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < rowsofMatrix; i++) {
        delete[] matrix[i];
        delete[] resultMatrix[i];
    }
    delete[] matrix;
    delete[] resultMatrix;

    return 0;
}
