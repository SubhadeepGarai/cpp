#include<iostream>

using namespace std;

bool cheakPalindrome(string str, int i, int j){

    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
        return cheakPalindrome(str,i+1,j-1);
    }
}

int main(){

    string name="subhadeep";
    cout<<endl;

    bool isPalindrome = cheakPalindrome(name,0,name.length()-1);

    if(isPalindrome){
        cout<<"it is palindorm.";
    }
    else{
        cout<<"It is not palindorm.";
    }


    return 0;
}