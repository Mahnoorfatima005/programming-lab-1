#include<iostream>
using namespace std;
main(){
    int numbers[5];
    for(int count=0;count<5;count=count+1){
        cout<<"enter number: ";
        cin>>numbers[count];
    }

 cout<<"first element in array is: "<<numbers[0]<<endl;
    cout<<"last element in array is: "<<numbers[4]<<endl;



}