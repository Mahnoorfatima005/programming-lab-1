#include<iostream>
using namespace std;
main(){
    int num;
    cout<<"enter number of elements: ";
    cin>>num;
    int arr[num];
    cout<<"enter  "<<num<< "numbers,one per line: ";
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    int largest=arr[0];
    for(int i=1;i<num;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"the largest number is: "<<largest<<endl;
}