#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<string> s;
    
    s.push("love");
    s.push("subhadeep");
    s.push("garai");

    cout<<"top element--> "<<s.top()<<endl;

    s.pop();
    cout<<"top element-->  "<<s.top()<<endl;

    cout<<"size of stack---> "<<s.size()<<endl;

    cout<<"empty or not--->  "<<s.empty()<<endl;


}