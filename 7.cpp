#include<iostream>
using namespace std;

class Employee
{
private:
    int id;
    static int count;
public:
    void setdata(void){
        cout<<"enter the id of employee"<<endl;
        cin>>id;
        count++;

    }

    void getdata(void){
        cout<<"the employee id is "<<id<<endl;
        cout<<"the count of employee is "<<count<<endl;  
    }
    static void getCount(void){
        // cout<<id; // throws an error
        cout<<"The value of count is "<<count<<endl;
    }
};
int Employee::count;
int main(){
    Employee azfar,aakash,adarsh;
    azfar.setdata();
    azfar.getdata();
    Employee::getCount();

    aakash.setdata();
    aakash.getdata();
    Employee::getCount();

    adarsh.setdata();
    adarsh.getdata();
    Employee::getCount(); 
    
    return 0;
}

 