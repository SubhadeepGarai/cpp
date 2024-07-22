#include<iostream>

using namespace std;

int getSum(int *arr, int size){

    if(size==0){
        return 0;
    }

    if(size==1){
        return arr[0];
    }

    int remainingPart = getSum(arr+1,size-1);
    int sum =arr[0]+remainingPart;

    return sum;

}


int main(){
    int arr[5] = {2, 9,6,8,9};
    int size = 5;

    int ans = getSum(arr,size);
    
    cout<<"sum is ...-> "<<ans;



    return 0;
}