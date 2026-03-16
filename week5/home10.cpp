#include<iostream>
using namespace std;
main(){
    int n,sum=0;
    cout<<"enter the number: ";
    cin>>n;
    for(int i=n;i>0;i=i/10){
    int n=i%10;
    sum=sum+n;
    }
    cout<<"sum of digits are: "<<sum<<endl;
}