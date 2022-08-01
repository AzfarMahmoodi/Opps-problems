#include<iostream>
using namespace std;
int money(float rate,int amount=3){
  return rate*amount;
}
int main(){
  int amount;
  int rate;
  cout<<"enter the rate "<<endl;
  cin>>rate;
  cout<<"the rate of interst is "<<money(rate)<<endl;
  cout<<"the save money "<<money(rate,10)<<endl;
  return 0;
}