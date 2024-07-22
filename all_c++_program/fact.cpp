//recursion

#include<iostream>

using namespace std;

//factorial of a any number.

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int a;
    cout<<"enter a number";
    cin>>a;
    cout<<"the factorial:  "<<factorial(a);

    return 0;

}  