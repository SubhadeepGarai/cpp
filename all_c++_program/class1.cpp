#include<iostream>

using namespace std;\

class y;

class x{
    int data;
    public:
     void setvalue(int value){
        data=value;
     }

     friend void add(x,y);
};

class y{
    int num;
    public:
      void setvalue(int value){
        num=value;
      }
       friend void add(x,y);
};
void add(x o1,y o2){
    cout<<"summing datas of x and y objects gives me"<<o1.data + o2.num;

}

int main(){
    x a1;
    a1.setvalue(5);

    y b1;
    b1.setvalue(5);

    add(a1,b1);

    return 0;

}
