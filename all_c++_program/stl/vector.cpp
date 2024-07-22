#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    cout<<"capacity-->"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"capacity-->"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"capacity-->"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"capacity-->"<<v.capacity()<<endl;
    cout<<"size-->"<<v.size();

    cout<<"element in 2nd index"<<v.at(2)<<endl;

    cout<<"fist element--->"<<v.front()<<endl;
    cout<<"last element--->"<<v.back()<<endl;

    v.pop_back();

    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";

    }   

}