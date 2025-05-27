#include <iostream>

using namespace std;

int main() {
    int rows = 3, cols = 3;
    int arr[3][3] =   {{1, 2, 3}, 
                       {4, 5, 6}, 
                       {7, 8, 9}};


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " " << endl;
        }
    }
     
    int larg = arr[0][0]; 
    for (int i = 0; i < rows * cols; i++) { 
        if (arr[i / cols][i % cols] > larg) {
            larg = arr[i / cols][i % cols];
        }
    }

    cout << "Largest element in the matrix: " << larg << endl;

    return 0;
}