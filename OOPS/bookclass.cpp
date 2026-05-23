#include<iostream>
using namespace std;
class book{

    private:
    char name;
    int pages;
    int price;

    public:
    void setname(char ch){
        name=ch;
    }
    void setpages(int p){
        pages=p;
    }
    void setprice(int pr){
        price=pr;
    }
    bool checkname(char ch){
        if(ch==name) return 1;
        else return 0;
    }
    int countBooks(int n){
        int count=0;
            if(price <n) return 1;
            else return 0;
    }

};
int main(){
    book a,b,c;
    for(int i=1;i<=3;i++){
        char ch;
        cout<<"Enter the book "<<i<< "'s name : ";
        cin>>ch;
        a.setname(ch);
        int p;
        cout<<"Enter the book "<<i<< "'s pages : ";
        cin>>p;
        a.setpages(p);
        int pr;
        cout<<"Enter the book "<<i<< "'s price : ";
        cin>>pr;
        a.setprice(pr);
    }

    cout<<a.checkname('B')<<endl;
    cout<<a.countBooks(12)<<endl;
    
    

}