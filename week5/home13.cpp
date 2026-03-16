#include<iostream>
using namespace std;
main(){
    int n;
    double x,p;
    cout<<"enter age of lilly: ";
    cin>>n;
    cout<<"enter the price of washing machine: ";
    cin>>x;
    cout<<"enter the unit price of toys: ";
    cin>>p;
    double savedMoney=0;
    int toyCount=0,moneyRecieved=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
    toyCount++;
        }
    else{
    moneyRecieved++;
    double moneyForBithday = 10.0*moneyRecieved;
    savedMoney +=(moneyForBithday-1.0);
    }
    }
    savedMoney +=toyCount*p;
    if(savedMoney>=x){
        double remainingMoney = savedMoney-x;
        cout<<"yes!: "<<remainingMoney<<endl;
    }
    else{
        double insufficiency=x-savedMoney;
        cout<<"no: "<<insufficiency<<endl;
    }
}