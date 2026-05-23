#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v = {3, 6, 9, 15, 20, 30, 36, 40, 45, 107, 1056};
    int target = 1057;
    int lo = 0;
    int hi = v.size() - 1;
    int mid;
    while (lo <= hi) {
        mid = (lo + hi) / 2;
        if (v[mid] < target) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    cout << v[hi]<<endl;
    cout<< v[lo];
}