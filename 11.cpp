#include<iostream>
using namespace std;
class player{
    private:
    int i,run,runs,ball,balls;
    float runrate;
    public:
    void getdata(){
        for(int i=1;i<=5;i++){
            cout<<"enter the run of match :"<<i<<endl;
            cin>>run;
            runs=runs+run;
            cout<<"enter the ball of match :"<<i<<endl;
            cin>>ball;
            balls=balls+ball;
        }
    }
    void rate(){
        runrate=runs/balls;
    }
};
class bowler{
    private:
    int i,run,runs,wick,wicket;
    float average;
    public:
    void getvalue(){
        for(int i=1;i<=5;i++){
            cout<<"enter the run of match :"<<i<<endl;
            cin>>run;
            runs=runs+run;
            cout<<"enter the wicket of match :"<<i<<endl;
            cin>>wick;
            wicket=wicket+wick;
        }
    }
    void avg(){
        average=runs/wicket;
    }
};
class profermance:public bowler,public player{
    private:
    int n ;
    float runrate,average;
    public:
    void check(){
        if ((runrate>=5)&&(average<=30)){
            cout<<"He is reliable player"<<endl;
            cout<<runrate<<endl;
            cout<<average<<endl;
        }
        else{
            cout<<"he is  not reliable player"<<endl;
        }
    }
};
int main(){
    profermance p1;
    p1.getdata();
    p1.getvalue();
    p1.rate();
    p1.avg();
    p1.check();
    return 0;
}