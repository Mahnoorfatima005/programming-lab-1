#include<iostream>
using namespace std;
bool canPay(int change[], double due){
    double total= (change[0]*0.25) + (change[1]*0.10)+
                  (change[2]*0.25)  + (change[3]*0.01);
    return total>=due;
}
main(){
    int quarters, dimes, nickels,pennies;
    double due;
    cout<<"enter quarters: ";cin>>quarters;
    cout<<"enter dimes: ";cin>>dimes;
    cout<<"enter nickels: ";cin>>nickels;
    cout<<"enter pennies: ";cin>>pennies;
    cout<<"enter the total amount due: $";cin>>due;

    int change[4]={quarters,dimes,nickels,pennies};
    if(canPay(change,due)){
        cout<<"can you pay the amount? yes"<<endl;

    }
    else{
       cout<<"can you pay the amount? no"<<endl;
    }
}