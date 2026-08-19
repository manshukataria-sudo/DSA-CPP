#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;
int f(vector<int>& dim, int i, int j) {
    if (i) {
    }
    int ans = INT_MAX;
    for (int k = i; k <= j; k++) {
        ans = min(ans, f(dim, ));
    }
    return ans;
}
int main() {
    int n;
    cout << "Enter the vector size : ";
    cin >> n;
    vector<int> dim(n);
    cout << "Enter the vector elements : ";
    for (int i = 0; i < n; i++) {
        cin >> dim[i];
    }
    cout << f(dim, 0, dim.size() - 1);
}