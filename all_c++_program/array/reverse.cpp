#include<iostream>

using namespace std;

void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while (start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}

void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i++){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
int main(){

    int arr[6]={1,2,3,4,5,6};
    int brr[5]={1,2,3,4,5};
    reverse(arr,6);
    printArray(arr,6);
    reverse(brr,5);
    printArray(brr,5);
    swapAlternate(arr,6);
    printArray(arr,6);
    swapAlternate(arr,5);
    printArray(brr,5); 
    return 0;
}