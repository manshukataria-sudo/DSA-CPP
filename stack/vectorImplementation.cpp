#include<iostream>
#include<vector>
using namespace std;
class Stack{
    private:
    vector<int>nums;
    int idx=0;
    public:
    void push(int val){
        this->nums.push_back(val);
        idx++;
    }
    void pop(){
        this->nums.pop_back();
        idx--;
    }
    int top(){
        return this->nums[idx-1];
    }
    int size(){
        return this->nums.size();
    }
};
int main(){
    Stack st;
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    st.push(80);
    st.push(70);
    st.push(70);
    st.push(70);
    st.push(1000);
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;

}