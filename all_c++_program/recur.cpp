#include<iostream>

using namespace std;

int factorial(int n){

    if(n==0||n==1){
        return 1;
    }
    int a = factorial(n-1);
    int b = n*a;

    return b;

}

int main(){
    int n;
    cout<<"enter the value:--->";
    cin>>n;

    int ans=factorial(n);

    cout<<ans;
}