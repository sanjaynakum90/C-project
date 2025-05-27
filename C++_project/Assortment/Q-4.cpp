#include <iostream>

using namespace std;

int main() {
    int rows = 3, cols = 3;
    int array[3][3] = {{1, 2, 3}, 
                       {4, 5, 6}, 
                       {7, 8, 9}};

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " "<<  endl;
        }
    }


    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += array[i][j];
        }
        cout << "Row sum: " << i + 1 << ": " << rowSum << endl;
    }

    
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += array[i][j];
        }
        cout << "Cols sum: " << j + 1 << ": " << colSum << endl;
    }

    return 0;
}