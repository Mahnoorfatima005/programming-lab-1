#include<iostream>
using namespace std;
main(){
    int n1,n2,lcm,hcf,i=1;
    cout<<"enter the first number: ";
    cin>>n1;
    cout<<"enter the second number: ";
    cin>>n2;
    while(i<=n1 && i<=n2){
        if(n1%i==0 && n2%i==0){
            hcf=i;
        }  i++;
    }
    lcm=(n1*n2)/hcf;
    cout<<"hcf is: "<<hcf<<endl;
    cout<<"lcm is: "<<lcm<<endl;

}