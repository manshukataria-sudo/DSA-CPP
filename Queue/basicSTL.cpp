#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> temp;
    temp.push(1);
    temp.push(2);
    temp.push(3);
    cout<<temp.empty()<<endl;
    
    cout << temp.size() << endl;
    cout << temp.front() << endl;
    cout << temp.back() << endl;
    temp.pop();
    cout << temp.size() << endl;

    cout << temp.front() << endl;
    // while(temp.size()){
    //     cout<<temp.front();
    //     temp.pop();
    //     cout<<endl;
    // }
}