#include<iostream>
using namespace std;
main(){
    int size1,size2;
    cout<<"enter number of elements for first array (must be two): ";
    cin>>size1;
    int arr1[size1];
    cout<<"enter"<<size1<<"elements,one per line: ";
    for(int i=0;i<size1;i++){
    cin>>arr1[i];
    }
    
    cout<<"enter number of elements for second array : ";
    cin>>size2;
    int arr2[size2];
    cout<<"enter"<<size2<<"elements one per line: ";
    for(int i=0;i<size2;i++){
        cin>>arr2[i];
    }
    int totalSize=size1+size2;
    int resultArray[totalSize];
    resultArray[0]=arr1[0];
    for(int i=0;i<size2;i++){
        resultArray[i+1]=arr2[i];
    }
    resultArray[totalSize-1]=arr1[1];
    cout<<"resulting array:[ ";
    for(int i=0;i<totalSize;i++){
        cout<<resultArray[i]<<(i==totalSize -1 ?"" : ", ");

    }
    cout<<"]"<<endl;}