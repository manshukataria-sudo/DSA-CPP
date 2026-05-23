#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    for(int i=0;i<7;i++){
        int n;
        cin>>n;
        v.push_back(n);
    }
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int x=-1;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==n) {
            x=i; 
            break;
        }
    }
    if(x!=-1)cout<<"Last occurence of "<<n<<" is : "<<x<<endl;
    else if(x==-1) cout<<n<<" NOT FOUND"<<endl;
}