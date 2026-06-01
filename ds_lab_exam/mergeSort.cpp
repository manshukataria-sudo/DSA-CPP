#include <iostream>
#include <vector>
std::vector<int> arr;
std::vector<int> temp;
void merge(int i, int e1, int j, int e2) {
    int start = i;
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
    for (int k = start; k <= e2; k++) {
        arr[k] = temp[k - start];
    }
    temp.clear();
}
void mergeSort(int s, int e) {
    if (s >= e) {
        return;
    }
    int mid = s + (e - s) / 2;
    mergeSort(s, mid);
    mergeSort(mid + 1, e);
    merge(s, mid, mid + 1, e);
}
int main() {
    int n;
    std::cout << "Enter the size of array : ";
    std::cin >> n;
    try {
        if (n <= 0) {
            throw "...Invalid Size...";
        }
        arr.resize(n);
        std::cout << "Enter the array elements : ";
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
        }
        mergeSort(0, n - 1);
        std::cout << "mergeSorted array is : ";
        for (int i = 0; i < n; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << "\n";
    } catch (...) {
        std::cout << "...Invalid Size...\n";
    }
}
