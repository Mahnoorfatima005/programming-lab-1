#include<iostream>
using namespace std;
main(){
int red_roses;
cout<<"Enter the amount of red roses: ";
cin>>red_roses;
int white_roses;
cout<<"Enter the amount of white roses: ";
cin>>white_roses;
int tulips;
cout<<"Enter the amount of tulips: ";
cin>>tulips;
 float price = (red_roses*2) + (white_roses*4.10) + (tulips*2.50 );
if(price>200){
float discount = price * 20 / 100;
float payable = price - discount; 
cout<<"price after discount is"<<payable;  
}

}