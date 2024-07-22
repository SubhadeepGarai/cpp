#include<iostream>

using namespace std;

bool isPresent(int arr[][3], int target,int row,int col){
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            if(arr[row][col]== target){
                return 1;
            }
        }
    } 
    return 0;
}

//tp print row wise sum
void printSum(int arr[][3],int row,int col){
    cout<<"printing sum-->"<<endl;
    for(int row=0; row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum += arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int main(){
    //create 2d array

    // int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    int arr[3][3];
// i-->row
//j-->col

cout<<"Enter the element:--->"<<endl;
//taking input -> row wish input
    for(int row=0; row<3;row++){
        for(int col=0;col<3;col++){
            cin>>arr[row][col];
        }
    } 

    //taking input-> col wish input
// i-->col
//j-->row
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>arr[j][i];
    //     }
    // }



    //output
    //i-->row
    //j--> col
    cout<<"Print the element---->"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"enter the element to search:--->"<<endl;
    int target;
    cin>>target;

    if(isPresent(arr,target,3,3)){
        cout<<"Element found "<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }


    printSum(arr,3,3);

}