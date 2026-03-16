#include<iostream>
using namespace std;
main(){
    int l,n1=0,n2=1,sum;
    cout<<"enter length of series: ";
    cin>>l;
    cout<<n1<<",";
    cout<<n2;
    for(int i=1;i<l-1;i++){
        sum=n1+n2;
    
    cout<<","<<sum<<endl;
    n1=n2;
   n2=sum;
  }}