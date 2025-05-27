#include <iostream>

using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter array elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Negative elements in the array:";
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}