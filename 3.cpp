#include<iostream>
using namespace std;
class shop

{
    int itemid[200];
    int itemprice[200];
    int counter;
    int i;

public:
    void inticounter(void) {counter=0; }
    void setprice(void);
    void displayprice(void);
};

void shop::setprice(void)
{
    cout<<"enter the itemid"<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"enter the itemprice"<<counter+1<<endl;
    cin>>itemprice[counter];
    counter++;
}
void shop ::displayprice(void)
{
    for (i= 0; i < counter; i++)
    {
        cout<<"the price is with item id"<<itemid[i]<<"is "<<itemprice[i]<<endl;
    } 
}
int main()
{
    shop dukkan;
    dukkan.inticounter();
    dukkan.setprice();
    dukkan.setprice();
    dukkan.setprice();
    dukkan.displayprice();
    return 0;
}
