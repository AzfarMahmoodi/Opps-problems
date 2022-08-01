#include<iostream>
using namespace std;
class y;
class x
{
int data;
public:
    void setvalue(int a){
        data=a;
    }
friend void add(x,y);
};

class y
{
int num;
public:
    void setvalue(int b){
        num=b;
    }
friend void add(x,y);
};

void add(x o1,y o2){
    cout<<o1.data+o2.num<<endl;
}

int main(){
    x a1;
    a1.setvalue(3);
    y b1;
    b1.setvalue(15);

    add(a1,b1);
    return 0;
}