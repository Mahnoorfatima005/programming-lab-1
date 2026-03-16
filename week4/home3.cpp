#include<iostream>
using namespace std;
main(){
int temp1;
cout<<"Enter the temperature of city 1: ";
cin>>temp1;
int temp2;
cout<<"Enter the temperature of city 2:  ";
cin>>temp2;
int diff = temp1 - temp2;
if(diff>10){
    cout<<"Difference is too big";
}
else{
    cout<<"Program ends";
}
}