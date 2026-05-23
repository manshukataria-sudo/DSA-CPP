#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main(){
    // vector<string> nos(6);
    // nos[0]="00123";
    // nos[1]="09023";
    // nos[2]="456";
    // nos[3]="01892";
    // nos[4]="940";
    // nos[5]="2901";
    string nos[]={"0123","0023","456","00182","940","002901"};
    string maxS;
    int maxIdx=0;
    int maxNo=stoi(nos[0]);
    for(int i=1;i<6;i++){
        if(maxNo<stoi(nos[i])) {
            maxNo=stoi(nos[i]);
            maxIdx=i;
            maxS=nos[i];
        }
    }
    cout<<maxIdx<<endl;
    cout<<maxS<<endl;
    string str;
    cout<<str;
}