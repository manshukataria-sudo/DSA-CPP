#include <iostream>
using namespace std;
void hanoi(int n,char s,char h,char d){
    if(n==0) return;
    hanoi(n-1,s,d,h);
    cout<<"Move disk "<<n<<" from "<<s<<" to "<<d<<endl;
    hanoi(n-1,h,s,d);
}
int main() {
	// your code goes here
    // int n;
    // cin>>n;
    // hanoi(n,'A','B','C');
	// return 0;

}