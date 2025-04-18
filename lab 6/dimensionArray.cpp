#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Get dimensions from user
    cout << "Enter the number of rows (max 3): ";
    cin >> rows;
    cout << "Enter the number of columns (max 3): ";
    cin >> cols;

    // Validate dimensions
    if (rows < 1 || rows > 3 || cols < 1 || cols > 3) {
        cout << "Error: Dimensions must be between 1 and 3." << endl;
        return 1;
    }

    // Dynamically allocate 2D array of doubles
    double** array = new double*[rows];
    for (int i = 0; i < rows; i++) {
        array[i] = new double[cols];
    }

    // Assign values using nested loops
    cout << "\nEnter values for the array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    // Output the values
    cout << "\nArray values:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // Free allocated memory
    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
