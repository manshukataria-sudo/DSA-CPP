#include<iostream>
#include<queue>
using namespace std;
void display(queue<int> &temp){
    int n=temp.size();
    for(int i=0;i<n;i++){
        cout<<temp.front()<<" ";
        temp.push(temp.front());
        temp.pop();
    }
    cout<<endl;
}
int main(){

    queue<int> temp;
    for(int i=1;i<=5;i++){
        temp.push(i*10);
    }
    display(temp);
    temp.pop();
    display(temp);

}