#include<iostream>
using namespace std;
class Salary;
class person{ 
    int Eno,  Salescount, Bonus;
    char Name[10], Designation[20];
    friend class Salary;
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
    
};    
class Salary{
    private:
    int  Basic, HRA, DA, PF , Gross,m,n,k,l;
    int Eno,  Salescount, Bonus;
    char Name[10], Designation[20];
    public:
    void readSalary(void){
        cin>>Basic;
       int m=((Basic*15)/100);
       int n=((Basic*25)/100);
        k=((Basic*5)/100);
        l=((Basic+HRA+DA+Bonus)-PF);
    }
    void printSalary(void){
        cout<<"ID: "<<Eno<<endl;
        cout<<"Name: "<<Name<<endl;
        cout<<"Designation: "<<Designation<<endl;
        cout<<"Salescount: "<<Salescount<<endl;
        cout<<"Bonus: "<<Bonus<<endl;
        cout<<"Basic Salary: "<<Basic<<endl;
        cout<<"HRA: "<<m<<endl;
        cout<<"DA: "<<n<<endl;
        cout<<"PF: "<<k<<endl;
        cout<<"Gross Salary: "<<l<<endl;
    }
};
int main(){
    person SalesPerson;
    Salary a;
     SalesPerson.readData();
     SalesPerson.calcBonus();
     a.printSalary();
     return 0;
 
}