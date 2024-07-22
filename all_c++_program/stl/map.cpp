#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int,string> m;
    m[1]= "subhadeep";
    m[2]="love";
    m[13]="garai";

    for(auto i:m){
        cout<<i.first<<endl;
    }

}