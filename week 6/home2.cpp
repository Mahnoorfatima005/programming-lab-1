#include<iostream>
using namespace std;

void countEvens(int arr[],int size){
    int count=0;
    for(int i=0;i<size;i++){
    if(arr[i]%2==0){ count++;}
    }
cout<<"total even numbers"<<count<<endl;}
 main(){
int n;
cout<<"enter number of elements: ";
cin>>n;
int numbers[n];
cout<<"enter"<<n<<"numbers"<<endl;
for(int i=0;i<n;i++){
    cin>>numbers[i];
}
countEvens(numbers,n);
}