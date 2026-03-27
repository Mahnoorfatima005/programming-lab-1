#include<iostream>
using namespace std;
main(){
   string name[5];
   cout<<"enter names of 5 students: ";
  
   for(int i=0;i<5;i++){
    cin>>name[i];
   }
   cout<<"students names are:"<<endl;
   for(int i=0;i<5;i++){
    cout<<name[i]<<endl;
   }}
