#include<iostream>
#include<queue>

using namespace std;

int main(){

    //create a queue
    queue<int> q;

    q.push(11);
    q.push(15);
    q.push(13);
    cout<<"front of the queue "<<q.front()<<endl;
    cout<<"size of queue"<<q.size()<<endl;

    q.pop();
    cout<<"size of queue"<<q.size()<<endl;

    if(q.empty()){
        cout<<"queue is empty "<<endl;
    }else{
        cout<<"queue is not empty "<<endl;
    }
    return 0;

}