#include<iostream>
using namespace std;
bool isSpecialArray(int arr[],int size){
    for(int i=0;i<size;i++){
    if(i % 2==0){
        if(arr[i] % 2!=0)return false; }
    
    else {
        if(arr[i] %2==0)return false;

    }
} return true;}
main(){
    int size;
    cout<<"enter the size of array: ";
    cin>>size;

    int arr[size];
    cout<<"enter"<<size<<"elements of the array:"<<endl;
    for(int i=0;i<size;i++){
     cin>>arr[i] ;  
    }
    if(isSpecialArray(arr,size))
    {cout<<"the array is special"<<endl;}
    else{ cout<<"the array is not special"<<endl;}
}