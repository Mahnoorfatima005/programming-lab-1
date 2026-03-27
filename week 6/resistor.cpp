#include<iostream>
using namespace std;
main(){
    int n; float sum=0.0;
    cout<<"enter the number of resistors in series: ";
    cin>>n;
    int arr[n];
    cout<<"enter the resistance value of "<<n<<"resistors,one per line: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
 }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<"the total resistance of series circuit is  "<<sum<<endl;
}