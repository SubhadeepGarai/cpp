#include<iostream>

using namespace std;


int partition(int arr[],int s,int e){
    int pivot=arr[s];
    int cnt=0;

    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }

    //place pivot at right position

    int piovtIndex = s+cnt;
    swap(arr[piovtIndex],arr[s]);

    int i=s;
    int j=e;
    while(i < piovtIndex && j > piovtIndex){

        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i < piovtIndex && j > piovtIndex){
            swap(arr[i++],arr[j--]);
        }

    }
    return piovtIndex;
}

void quickSort(int arr[],int s,int e){

    if(s>=e){
        return ;
    }

    int p=partition(arr,s,e);

    quickSort(arr,s,p-1);

    quickSort(arr,p+1,e);


}

int main(){

    int arr[5]={2,4,1,6,9};
    int n=5;
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}