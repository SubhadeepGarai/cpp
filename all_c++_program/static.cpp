#include<iostream>

using namespace std;

class employee{
    int id;
    static int count;

    public:
    void setData(void){
        cout<<"Enter the id"<<endl;
        cin>>id;
        count++;

    }
    void getData(void){
        cout<<"The id of this employee is "<<id<<"and this is employee number "<<count;
    }
};
int employee::count;
int main(){

    employee subhadeep,rohan,lovish;

    subhadeep.setData();
    subhadeep.getData();

    rohan.setData();
    rohan.getData();

    lovish.setData();
    lovish.getData();
    

    return 0;
}