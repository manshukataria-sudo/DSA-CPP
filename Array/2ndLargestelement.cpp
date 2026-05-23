#include <climits>
#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter the size of array : ";
    cin >> size;
    int arr[size];
    cout << "Enter the " << size << " elements of the array : ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int max1 = arr[0];
    int max2 = INT_MIN;
    for (int i = 0; i < 8; i++) {
        if (max1 < arr[i])
            max1 = arr[i];
    }
    for (int i = 0; i < 8; i++) {
        if (arr[i] != max1 && max2 < arr[i])
            max2 = arr[i];
    }
    cout << "Second largest element is : " << max2 << endl;
}