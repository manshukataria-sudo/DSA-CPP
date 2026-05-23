#include<iostream>
using namespace std;
class book {
    private:
    int pages;
    int price;

    public:
    void setpages(int a){
        pages=a;
    }
    void setprice(int b){
        price=b;
    }
};
int main(){
    book a;
    a.setpages(100);
    a.setprice(120);


}