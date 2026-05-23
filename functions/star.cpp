#include<iostream>
using namespace std;
void star(int a){
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    for(int i=1;i<=3;i++){
        int a;
        cin>>a;
        star(a);
    }


}