#include<iostream>
using namespace std;

class person{
    private:
    int Eno,  Salescount, Bonus;
    char Name[10], Designation[20];
    
    public:
    void readData(void){
        cin>>Eno;
        cin>>Name;
        cin>>Designation;
        cin>>Salescount;
    }
    void calcBonus(void){
        if (Salescount<100){
            Bonus=1000;
        }
        else if (Salescount>=100 && Salescount<=500){
            Bonus=5000;
        }
        else{
            Bonus=10000;
        }
    }
    void printData(void){
        cout<<"ID: "<<Eno<<endl;
        cout<<"Name: "<<Name<<endl;
        cout<<"Designation: "<<Designation<<endl;
        cout<<"Salescount: "<<Salescount<<endl;
        cout<<"Bonus: "<<Bonus<<endl;
}
};
 int main(){
     person SalesPerson;
     SalesPerson.readData();
     SalesPerson.calcBonus();
     SalesPerson.printData();
     return 0;
 }  