#include <iostream>

using namespace std;

int main() {
    int matrix[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} }; 
    int transposed[3][3];

    for (int i = 0; i < 3 * 3; i++) {
        transposed[i % 3][i / 3] = matrix[i / 3][i % 3];
    }

    cout << "Transposed Matrix:\n";
    for (int i = 0; i < 3 * 3; i++) {
        cout << transposed[i / 3][i % 3] << " ";
        if ((i + 1) % 3 == 0) cout << endl;
    }

    return 0;
}