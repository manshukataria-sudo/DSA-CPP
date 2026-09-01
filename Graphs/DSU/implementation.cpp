#include <iostream>
#include <vector>

using namespace std;

int find(vector<int>& parent, int x) {
    // check if it's the parent of itself
    // find the parent of parent, and restore while returning
    // TC = O(log*n)
    return parent[x] = (parent[x] == x) ? x : find(parent, parent[x]);
}

void Union(vector<int>& parent, vector<int>& rank, int a, int b) {
    // TC = O(log*n)
    a = find(parent, a);
    b = find(parent, b);

    // if both have same parents
    if (a == b) {
        return;
    }
    
    if (rank[a] >= rank[b]) {
        rank[a]++;
        parent[b] = a;
    } else {
        rank[b]++;
        parent[a] = b;
    }
}

int main() {
    int n, m;
    cout << "Enter the size of parent array : ";
    cin >> n;
    // n -> no. of elements and m-> no. of queries
    vector<int> parent(n + 1);
    vector<int> rank(n + 1, 1);
    for (int i = 1; i < n; i++) {
        parent[i] = i;
    }
    cout << "Enter the no. of queries : ";
    cin >> m;
    while (m--) {
        string query;
        cout << "Enter the query (union/find) : ";
        cin >> query;
        if (query == "union") {
            int ele1, ele2;
            cout << "Enter the elements to union : ";
            cin >> ele1 >> ele2;
            Union(parent, rank, ele1, ele2);
        } else if (query == "find") {
            int x;
            cin >> x;
            cout << "Enter the element : ";
            cout << "parent is : " << find(parent, x) << "\n";
        } else {
            cout << "Invalid query";
        }
    }
    cout << '\n';
    return 0;
}