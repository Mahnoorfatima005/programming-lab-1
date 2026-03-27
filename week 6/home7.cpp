#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"enter number of products: ";
    cin>>n;
    char productNames[n][50];
    double prices[n];
    int quantity[n];

    for(int i=0;i<n;i++){
    cout<<"enter names of products "<<i+1<<":";
    cin>> productNames[i];
    cout<<"enter the price of "<<productNames[i]<<":";
    cin>>prices[i];
    cout<<"enter the quantity of "<<productNames[i]<<":";
    cin>>quantity[i];

    }
    cout<<"product inventory report:"<<endl;
     for(int i=0;i<n;i++){
    double totalValue=prices[i]*quantity[i];
    cout<<productNames[i]<<": $"<<prices[i]<<","<<quantity[i]<<" in stock, total value: $"<<totalValue<<endl;
} }