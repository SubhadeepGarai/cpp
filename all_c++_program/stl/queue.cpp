#include<iostream>
#include<queue>

using namespace std;

int main(){

    queue<string> q;

    q.push("love");
    q.push("subhadeep");
    q.push("garai");
    
    cout<<"before size-->  "<<q.size()<<endl;

    cout<<"first element--> "<<q.front()<<endl;

    q.pop();
    cout<<"first element-->  "<<q.front()<<endl;

    cout<<"after size-->  "<<q.size()<<endl;



}