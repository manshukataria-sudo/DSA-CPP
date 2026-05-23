#include<iostream>
using namespace std;

    // while length and width of maze is given

int waysSize(int rows,int columns){
    if(rows==1 || columns==1) return 1;
    return waysSize(rows,columns-1)+waysSize(rows-1,columns);
}
    //while starting and ending position of indices of person and maze are given;

int waysIdx(int sR,int sC,int eR,int eC){
    if(sR==eR || sC==eC) return 1;
    return waysIdx(sR+1,sC,eR,eC)+waysIdx(sR,sC+1,eR,eC);
}
void ways(int sR,int sC,int eR,int eC,string way){
    // if(sR==eR){
    //     for(int i=1;i<=eC-sC;i++) way+="R";
    //     cout<<way<<endl;
    //     return;
    // }
    // if(sC==eC){
    //     for(int i=1;i<=eR-sR;i++) way+="D";
    //     cout<<way<<endl;
    //     return;
    // }
    if(sR>eR || sC>eC) return;
    if(sR==eR && sC==eC){
        cout<<way<<endl;
        return;
    }
    ways(sR+1,sC,eR,eC,way+"D");
    ways(sR,sC+1,eR,eC,way+"R");
}
void ways2(int row,int col,string way){
    if(row<1 || col<1) return;
    if(row==1 && col==1){
        cout<<way<<endl;
    }
    ways2(row,col-1,way+"R");
    ways2(row-1,col,way+"D");
}
int main(){
    cout<<"No. of ways are : "<<waysSize(3,3)<<endl;
    cout<<"No. of ways are : "<<waysIdx(1,1,100,100)<<endl;
    cout<<"All the possible ways are : "<<endl;
    ways(1,1,3,3,"");
    cout<<endl<<endl;
    ways2(3,3,"");
}