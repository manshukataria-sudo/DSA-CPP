#include <climits>
#include <iostream>
#include <vector>

using namespace std;
int get(int ele, vector<int>& par) {
    if (par[ele] == ele) {
        return ele;
    }
    return par[ele] = get(par[ele], par);
}
void Union(int a, int b, vector<int>& par, vector<int>& rank, vector<int>& maximal,
           vector<int>& minimal, vector<int>& size) {
    a = get(a, par);
    b = get(b, par);

    if (a == b) {
        return;
    }
    if (rank[a] >= rank[b]) {
        par[b] = a;
        rank[a]++;
        size[a] += size[b];

        minimal[a] = min(minimal[a], minimal[b]);
        maximal[a] = max(maximal[a], maximal[b]);
    } else {
        par[a] = b;
        rank[b]++;
        size[b] += size[a];
        minimal[b] = min(minimal[a], minimal[b]);
        maximal[b] = max(maximal[a], maximal[b]);
    }
}
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> parent(n + 1);
    vector<int> maximal(n + 1);
    vector<int> minimal(n + 1);
    vector<int> size(n + 1, 1);
    vector<int> rank(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        parent[i] = maximal[i] = minimal[i] = i;
    }
    while (m--) {
        string task;
        cin >> task;
        if (task == "union") {
            int ele1, ele2;
            cin >> ele1 >> ele2;
            Union(ele1, ele2, parent, rank, maximal, minimal, size);
        } else {
            int ele;
            cin >> ele;
            int leader = get(ele, parent);
            cout << minimal[leader] << " " << maximal[leader] << " " << size[leader];
        }
    }
    cout << '\n';
    return 0;
}