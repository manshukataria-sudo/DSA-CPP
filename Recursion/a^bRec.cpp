#include <iostream>
using namespace std;
int aPowerB(int base, int power) {
    if (power == 0)
        return 1;
    return base * aPowerB(base, power - 1);
}
int main() {
    int a, b;
    cout << "Enter the base : ";
    cin >> a;
    cout << "Enter the power : ";
    cin >> b;
    // cout<<aPowerB(a,b)<<endl;
    int pro = 1;
    for (int i = 1; i <= b; i++) {
        pro *= a;
    }
    cout << pro << endl;
}