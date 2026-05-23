#include <iostream>
using namespace std;
int main() {
    int arr[] = {5, 30, 1, -4, 2};
    for (int ele : arr) {
        cout << ele << " ";
    }
    cout << endl;
    int n = 5;
    for (int i = 1; i < n; i++) {
        int idx = i;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[idx] < arr[j]) {
                swap(arr[idx], arr[j]);
                idx--;
            } else
                break;
        }
    }
    for (int ele : arr) {
        cout << ele << " ";
    }
}