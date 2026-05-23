#include<iostream>
#include<vector>
using namespace std;
class Cirque{
private:
    int *arr;
    int b=0;
    int f=0;
    int c;
    int n=0;
public:
    Cirque(int k){
        this->c=k;
        arr=new int[k];
    }
    int front(){
        if(n==0){
            cout<<"Cirque is empty"<<" ";
            return -1;
        }
        return arr[f];
    }
    int back(){
        if(n==0){
            cout<<"Cirque is empty"<<" ";
            return -1;
        }
        if(b==0) return arr[c-1];
        return arr[b-1];
    }
    void push(int val){
        if(n==c){
            cout<<"Cirque is full"<<endl;
            return;
        }
        arr[b]=val;
        b++;
        n++;
        if(b==c) b=0;
    }
    void pop(){
        if(n==0){
            cout<<"Cirque is empty"<<" ";
            return;
        }
        f++;
        n--;
        if(f==c) f=0;
    }
    bool empty(){
        if(n==0) return 1;
        return 0;
    }
    int size(){
        return this->n;
    }
    void display(){
        if(n==0){
            cout<<"Cirque is empty"<<" ";
            return;
        }
        int i=f;
        int count=0;
        while(count<n){
            cout<<arr[i]<<" ";
            i++;
            if(i==c) i=0;
            count++;
        }
        cout<<endl;
    }
};
int main(){
    Cirque cq(5);
    cq.push(10);
    cq.push(20);
    cq.push(30);
    cq.push(40);
    cq.display();
    cq.push(50);
    cout<<cq.front()<<endl;
    cout<<cq.back()<<endl;
    cq.pop();
    cout<<cq.front()<<endl;
    cout<<cq.back()<<endl;
    cq.display();
    cq.push(60);
    cq.display();
    cq.push(70);
    cq.display();
    cq.push(80);
    cout<<cq.back()<<endl;
    cout<<cq.empty()<<endl;
    cout<<cq.size()<<endl;


}