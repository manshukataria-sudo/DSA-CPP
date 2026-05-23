// #include<iostream>
// #include<vector>
// using namespace std;
// vector<vector<int>> generate(int numRows) {
//         vector<vector<int>> pascal;
//         int n=numRows-1;
//         int i=0;
//         while(i<numRows){
//             vector<int> col;
//             int m=1;
//             for(int j=0;j<=i;j++){
//                 col.push_back(m);
//                 m=m*(i-j)/(j+1);
//             }
//             pascal.push_back(col);
//             i++;
//         }
//         return pascal;
//     }
// int main(){
//     vector<vector<int>> a=generate(5);
//     int k=0;
//     for(int i=0;i<5;i++){
//         for(int j=0;j<=k;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//         k++;
//     }
// }


//optimizsed;

#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> generate(int numRows){
        vector<vector<int>> pascal;
        for(int i=0;i<numRows;i++){
            pascal.push_back(vector<int> (i+1));
        }
        

        return pascal;
    }

int main(){
    vector<vector<int>> a=generate(5);
    int k=0;

    for(int i=0;i<5;i++){
        for(int j=0;j<=k;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        k++;
    }

}