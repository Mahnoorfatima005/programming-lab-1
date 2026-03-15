#include<iostream>
using namespace std;
main(){
string n1,n2,n3;
int a1,a2,a3;
cout<<"Enter the name of first brother: ";
cin>>n1;
cout<<"Enter the age of first brother: ";
cin>>a1;
cout<<"Enter the name of second brother: ";
cin>>n2;
cout<<"Enter the age of second brother: ";
cin>>a2;
cout<<"Enter the name of third brother: ";
cin>>n3;
cout<<"Enter the age of third brother: ";
cin>>a3;
if(a1<a2 && a1<a3)
{cout<<n1<<"is the youngest";}
else if(a2<a1 && a2<a3)
{cout<<n2<<"is the youngest";}
else{cout<<n3<<"is the youngest";}
}