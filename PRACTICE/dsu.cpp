#include <iostream>
#include <vector>

using namespace std;
int find(int ele, vector<int>& par) {
    return par[ele] = (par[ele] == ele) ? ele : find(par[ele], par);
}
void Union(int a, int b, vector<int>& par, vector<int>& rank) {
    a = find(a, par);
    b = find(b, par);
    if (a == b) {
        return;
    }
    if (rank[a] >= rank[b]) {
        par[b] = a;
        rank[a]++;
    } else {
        par[a] = b;
        rank[b]++;
    }
}
int main() {
    cout << '\n';
    return 0;
}