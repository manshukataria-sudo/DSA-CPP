#include <iostream>
#include <vector>
using namespace std;
void merge(int arr[], int size, int i, int e1, int j, int e2) {
    vector<int> temp;
    while (i <= e1 && j <= e2) {
        if (arr[i] > arr[j]) {
            temp.push_back(arr[j++]);
        } else {
            temp.push_back(arr[i++]);
        }
    }
    while (i <= e1) {
        temp.push_back(arr[i++]);
    }
    while (j <= e2) {
        temp.push_back(arr[j++]);
    }
    for (int i = 0; i < temp.size(); i++) {
        arr[i] = temp[i];
    }
}
int main() {
    int arr[] = {1, 3, 6, 8, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15, 17, 18, 19, 200};
    int size = sizeof(arr) / sizeof(arr[0]);
    merge(arr, size, 0, 3, 4, 19);
    for (int ele : arr) {
        cout << ele << " ";
    }
    cout << "\n";
}