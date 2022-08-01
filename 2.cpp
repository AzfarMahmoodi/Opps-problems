#include<iostream>
using namespace std;
int fibo(int n){
    if ((n==0)||(n==1)){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    cout<<"enter the number to print"<<endl;
    cin>>n;
    cout<<"the fibonacci of this number "<<n<<" is "<<fibo(n)<<endl;
    return 0;
}