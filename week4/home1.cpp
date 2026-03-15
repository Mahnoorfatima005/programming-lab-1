#include<iostream>
using namespace std;
main(){
string name;
cout<<"Enter the name of the country";
cin>>name;
int price;
cout<<"Enter the price of ticket";
cin>>price;
int discount5 = price*5/100;
int total_discount5 = price -discount5; 
int discount10 = price*10/100;
int total_discount10 = price - discount10;
if (name=="Ireland"){

cout<<"the discount price is"<<total_discount10;
}
else{
    cout<<"the discount price is"<<total_discount5;
}
}

