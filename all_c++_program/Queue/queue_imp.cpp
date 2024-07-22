#include<iostream>

using namespace std;

class Queue{
    
    int* arr;
    int front;
    int rear; 
    int size;

public:

    Queue(int size) {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(front == rear) {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int data) {
        if(rear == size)
            cout << "Queue is Full" << endl;
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if(front == rear) {
            return -1;
        }
        else
        {	int ans = arr[front];
            arr[front] = -1;
            front++;
            if(front==rear){
                front = 0;
                rear = 0;
            }
        return ans;
        }
    }

    int peek() {
        if(front == rear) {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
};

int main(){

    //create a queue
    Queue q(5);

    q.enqueue(11);
    q.enqueue(15);
    q.enqueue(13);
    cout<<"front of the queue "<<q.peek()<<endl;

    q.dequeue();
    cout<<"front of the queue "<<q.peek()<<endl;

    if(q.isEmpty()){
        cout<<"queue is empty "<<endl;
    }else{
        cout<<"queue is not empty "<<endl;
    }
    return 0;

}