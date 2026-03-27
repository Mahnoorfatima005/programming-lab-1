#include<iostream>
using namespace std;
main(){
    string input;
    cout<<"enter the string: ";
    cin>>input;
    cout<<"reversed string: ";
    for(int i=input.length() -1;i>=0;i--){
        cout<<input[i];
    }
    cout<<endl;
}