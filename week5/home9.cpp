#include<iostream>
using namespace std;
main(){
    int n,d,count=0;
    cout<<"enter the number: ";
    cin>>n;
    cout<<"enter the digit to check: ";
    cin>>d;
    for(int i=n;i>0;i=i/10){
    int n=i%10;
    if(n==d){
        count++;}
     }

    cout<<"frequency: "<<endl;
}