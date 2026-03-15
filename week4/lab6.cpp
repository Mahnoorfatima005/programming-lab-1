#include<iostream>
using namespace std;
main(){
    int salary=10000;
    int laptop_price=50000;
    float advance=salary*0.5*6;
    if(advance>=laptop_price){
        cout<<"He can buy the laptop"<<endl;}
    else 
    {
            int months = laptop_price/ (salary*0.5);
            cout<<"Months equire to buy a laptop"<<months<<endl;
        }
    }
