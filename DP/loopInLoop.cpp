#include <iostream>
using namespace std;
int main() {
    int arr[][5] = {{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {5, 4, 3, 2, 1}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    int arr2[10000][10000];
    for (int i = 0; i < 10000; i++) {
        for (int j = 0; j < 10000; j++) {
            cout<<arr2[i][j]<<" ";
        }
        cout<<"\n";
    }
}