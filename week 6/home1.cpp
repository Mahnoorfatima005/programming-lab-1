#include<iostream>
using namespace std;
main(){
    int n, sum=0;
    cout<<"enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"enter"<<n<<"numbers"<<endl;
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    for(int i=0;i<n;i++){
    sum +=arr[i];
    }
    cout<<"sum of all elements: "<<sum <<endl;
}