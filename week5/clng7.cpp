#include<iostream>
using namespace std;
main(){
    string pin;
    double balance=0,deposit=0,withdraw=0;
    int choice;
    for(int i=1;i<=3;i++){
        cout<<"enter pin: ";
        cin>>pin;
        if(pin=="1234"){
        cout<<"login successful"<<endl;
        break;
        }
        if(i==3){
            cout<<"too many attempts .card blocked"<<endl;
        }
    }
    for(int i=1;i<=5;i++){
        cout<<endl<<"-----ATM MENU-----"<<endl;
        cout<<"1.check balance"<<endl;
        cout<<"2.deposit money"<<endl;
        cout<<"3.withdraw money"<<endl;
        cout<<"exit"<<endl;

        cout<<"enter choice: ";
        cin>>choice;

        if(choice==1){
            cout<<"current balance: ";
            cin>>balance;
        }
        else if(choice==2){
            cout<<"enter amount to deposit: ";
            cin>>deposit;
            balance=balance+deposit;
            cout<<"amount deposited successfully"<<endl;
        }
        else if(choice==3){
            cout<<"enter amount to withdraw: ";
            cin>>withdraw;
            balance=balance - withdraw;
            cout<<"please withdraw your money"<<endl;
        }
        else if(choice==4){
            cout<<"thanks for using ATM"<<endl;
        }
    }
}