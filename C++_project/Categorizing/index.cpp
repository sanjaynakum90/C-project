#include <iostream>
#include <vector>

using namespace std;

// Function to perform Selection Sort
void selectionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        swap(arr[i], arr[minIdx]);
    }
}

void merge(vector<int> &arr, int left, int mid, int right)
{
    vector<int> leftVec(arr.begin() + left, arr.begin() + mid + 1);
    vector<int> rightVec(arr.begin() + mid + 1, arr.begin() + right + 1);

    int i = 0, j = 0, k = left;
    while (i < leftVec.size() && j < rightVec.size())
    {
        if (leftVec[i] <= rightVec[j])
            arr[k++] = leftVec[i++];
        else
            arr[k++] = rightVec[j++];
    }

    while (i < leftVec.size())
        arr[k++] = leftVec[i++];
    while (j < rightVec.size())
        arr[k++] = rightVec[j++];
}

//*****************Merge Sort function**************
void mergeSort(vector<int> &arr, int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

// **********Linear Search**********
int linearSearch(const vector<int> &arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

// ********Binary Search*********
int binarySearch(const vector<int> &arr, int target)
{
    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// Display vector elements
void displayArray(const vector<int> &arr)
{
    for (int val : arr)
        cout << val << " ";
    cout << endl;
}

// Menu-driven interface
int main()
{
    vector<int> arr;
    int choice;

    do
    {
        cout << "\n--- MENU ---\n";
        cout << "1. Enter Array\n";
        cout << "2. Selection Sort\n";
        cout << "3. Merge Sort\n";
        cout << "4. Linear Search\n";
        cout << "5. Binary Search (on sorted array)\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int n, val;
            cout << "Enter number of elements: ";
            cin >> n;
            arr.clear();
            cout << "Enter " << n << " integers:\n";
            for (int i = 0; i < n; i++)
            {
                cin >> val;
                arr.push_back(val);
            }
        }
        else if (choice == 2)
        {
            vector<int> temp = arr;
            selectionSort(temp);
            cout << "Sorted Array (Selection Sort): ";
            displayArray(temp);
        }
        else if (choice == 3)
        {
            vector<int> temp = arr;
            mergeSort(temp, 0, temp.size() - 1);
            cout << "Sorted Array (Merge Sort): ";
            displayArray(temp);
        }
        else if (choice == 4)
        {
            int target;
            cout << "Enter number to search for: ";
            cin >> target;
            int index = linearSearch(arr, target);
            if (index != -1)
                cout << "Found at index: " << index << endl;
            else
                cout << "Not found.\n";
        }
        else if (choice == 5)
        {
            vector<int> sorted = arr;
            mergeSort(sorted, 0, sorted.size() - 1);
            cout << "Sorted Array: ";
            displayArray(sorted);
            int target;
            cout << "Enter number to search for: ";
            cin >> target;
            int index = binarySearch(sorted, target);
            if (index != -1)
                cout << "Found at index: " << index << endl;
            else
                cout << "Not found.\n";
        }
        else if (choice == 6)
        {
            cout << "Exiting...\n";
        }
        else
        {
            cout << "Invalid choice.\n";
        }

    } while (choice != 6);

    return 0;
}
