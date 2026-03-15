#include<iostream>
using namespace std;
main(){
    int amount;
    cout<<"Enter your bill amount: ";
    cin>>amount;
    float discount5 = amount * 5/100;
    float discount_5percent = amount - discount5;
    float discount10 = amount * 10/100;
    float discount_10percent = amount - discount10;
    if(amount<=5000){
        cout<<"your discount bill is"<<discount_5percent;
    }
    if(amount>5000){
        cout<<"your discount bill is"<<discount_10percent;
    }
}