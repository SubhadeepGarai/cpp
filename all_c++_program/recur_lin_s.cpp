#include<iostream>

using namespace std;

bool linearsearch(int arr[],int size, int key){
    
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return false;
    }
    else{
        bool remainingPart=linearsearch(arr+1,size-1,key);
        return remainingPart;
    }
}


int main(){
    int arr[5] = {2,9,6,8,9};
    int size = 5;
    int key = 2;

    bool ans = linearsearch(arr,size,key);
    
    if(ans){
        cout<<"key is present.";
    }
    else{
        cout<<"key is not present.";
    }



    return 0;
}