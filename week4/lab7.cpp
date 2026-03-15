#include<iostream>
using namespace std;
main(){
    int num1,num2;
    char op;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the operator: ";
    cin>>op;
    cout<<"Ener the second number: ";
    cin>>num2;
    if(op=='+'){
        cout<<num1 <<"-"<<num2<<"="<<num1-num2;
    }
 if(op=='-'){
    cout<<num1<<"+"<<num2<<"="<<num1+num2;
 }
if (op=='/'){
    cout<<num1<<"*"<<num2<<"="<<num1*num2;
}
if(op=='*'){
    cout<<num1<<"/"<<num2<<"="<<num1*num2;
}
}