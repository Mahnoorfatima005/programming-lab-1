#include<iostream>
#include<string>
using namespace std;
main(){
    int n;
    int count=0;
    char searchLetter;
    cout<<"enter the number of customers: ";
    cin>>n;
    string names[n];
    cout<<"enter the names of"<<n<<"customers:"<<endl;
    for(int i=0;i<n;i++){
    cin>>names[i];
    }
    cout<<"enter the letter to check: ";
    cin>>searchLetter;
   
    for(int i=0;i<n;i++){
    if(! names[i].empty() && names[i][0]==searchLetter){
        count++;
    }
    }
    cout<<"total names starting with '"<<searchLetter<<"':"<<count<<endl;
}