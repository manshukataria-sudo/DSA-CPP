#include<iostream>
using namespace std;
void sums(int i,int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }
    sums(--i,sum+i);
}
int main(){
    sums(3,0);
    return 0;
} 