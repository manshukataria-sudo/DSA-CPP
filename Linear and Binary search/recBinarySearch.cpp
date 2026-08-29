#include <iostream>
using namespace std;
int f(int arr[], int size, int target, int lo, int hi) {
    if (lo > hi) {
        return -1;
    }
    int mid = lo + (hi - lo) / 2;
    if (arr[mid] == target) {
        return mid;
    }
    if (arr[mid] > target) {
        hi = mid - 1;
    } else {
        lo = mid + 1;
    }
    return f(arr, size, target, lo, hi);
}
int main() {
    int arr[] = {1, 4, 6, 7, 8, 9, 10, 13, 16, 19, 20, 21, 25, 38};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target = 38;
    cout << f(arr, size, target, 0, size - 1) << "\n";
}