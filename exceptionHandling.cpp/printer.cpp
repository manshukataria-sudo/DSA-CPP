#include<iostream>
#include<string>
using namespace std;
class Printer{
    string name;
    int availPages;
public:
    Printer(string name,int availPages){
        this->name=name;
        this->availPages=availPages;
    }

    void print(string txtDoc){
        int pagesReq=txtDoc.length()/10;

        if(pagesReq>availPages)
            //throw "Insufficient Pages";
            throw 101;
        
        cout<<"Printing..."<<txtDoc<<endl;
        availPages-=pagesReq;
    }
};

int main(){
    Printer a("Canon lookreal",3);
    try{
        a.print("Aan meri jaan");
        a.print("Aan meri jaan");
        a.print("Aan meri jaan");
        a.print("Aan meri jaan");
    }
    catch(const char *txt){
        cout<<"Exception : "<<txt<<endl;
    }
    // catch(int exCode){
    //     cout<<"Exception code : "<<exCode<<endl;
    // }
    catch(...){
        cout<<"Exception happened"<<endl;
    }
}