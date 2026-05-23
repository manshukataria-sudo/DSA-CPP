#include<iostream>
#include<string>
using namespace std;
int main(){
    string word="four";
    try{
        // char *arr=new char[9999999999999999];
        // cout<<word.at(2)<<endl;
        throw("Runtime error");
    }
    // catch(...){             // this catch block gonna catch all errors
    //     cout<<"Error!! index out of bound"<<endl;
    // }
    catch(out_of_range &e){
        cout<<"First catch: "<<e.what()<<endl;
    }
    catch(bad_alloc &e){
        cout<<"Second catch: "<<e.what()<<endl;
    }
    catch(exception &e){
        cout<<"Exception caught: "<<e.what()<<endl;
    }

    
}