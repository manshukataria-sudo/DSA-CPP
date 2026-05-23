#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 12, 35, 107, 1056};
    int target = 1056;
    int lo = 0;
    int hi = v.size() - 1;
    int mid;
    while (lo <= hi) {
        mid = (lo + hi) / 2;
        if (v[mid] == target) {
            cout << "present" << endl;
            break;
        } else if (v[mid] < target) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    cout << "not present" << endl;
}