#include<iostream>

using namespace std;

bool search(int arr[],int size,int key){

    for(int i=0;i<size;i++){
        if(arr[i]==key){
            cout<<"key is present"<<endl;
        }
        else{
            cout<<"key is not present "<<endl;
        }
    }
    
}


int main(){
    int size;
    cout<<"size of array"<<endl;
    cin>>size;
    int arr[1000];
    cout<<"element:"<<endl;

    for (int i = 0; i <size; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter the element to search for: "<<endl;
    cin>>key;
    bool found=search(arr,size,key);
    cout<<found;
    
    return 0;
}