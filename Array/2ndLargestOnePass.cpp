#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the " << n << " elements : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (max < arr[i]) {
            smax = max;
            max = arr[i];
        }
    }
    cout << smax << endl;
}