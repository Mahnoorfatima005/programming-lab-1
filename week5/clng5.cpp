#include<iostream>
using namespace std;
main(){
    int i,j,rows;
    cout<<"enter number of rows: "<<endl;
    cin>>rows;
    for(i=1; i<=rows ; i++){
        for(j=1;j<=i;j++){
        cout<<"*";}
        cout<<"\n";}
    for(i=rows-1;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}