#include<iostream>
#include<string>
using namespace std;
main(){
    int n;
    
    cout<<"enter number of students: ";
    cin>>n;
    string names[n];
    cout<<"enter names of "<<n<<"students:"<<endl;
    for(int i=0;i<n;i++){
    cin>>names[i];
    }
   
    
    for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
    if(names[i]>names[j]){
    swap(names[i],names[j]);
    }
    }
    }  
    cout<<"students in alphabetical order are:"<<endl;
    for(int i=0;i<n;i++){
     cout<<names[i]<<endl;}
    
}