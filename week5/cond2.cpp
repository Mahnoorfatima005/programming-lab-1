#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"enter a positive number";
    cin>>n;
    while(n<=0){
        cout<<"Error:"<<n<<"not positive value"<<endl;
        cout<<"enter a positive value"<<endl;
        cin>>n;
    }
    cout<<"program ends";
}