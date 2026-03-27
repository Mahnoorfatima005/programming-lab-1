#include<iostream>
using namespace std;
main(){
    int correctPin=1234;
    int pin[3];
    int choice;
    int balance=1000;
    int amount;
    bool login=false;
    for(int i=0;i<3;i++){
        cout<<"enter ATM pin: ";
        cin>>pin[i];
        if(pin[i]==correctPin){ login=true;
        cout<<"login successful"<<endl;
        break;  }
    else{ cout<<"incorrect pin "<< endl;}

    }
    if(login==true){
        while(true){
            cout<<"-----ATM MENU-----"<<endl;
            cout<<"1.check balance"<<endl;
            cout<<"2.deosit money"<<endl;
            cout<<"3.withdraw money"<<endl;
            cout<<"4.exit"<<endl;
            cout<<"enter your choice: ";
            cin>>choice;
            if(choice==1){
            cout<<"current balance:"<<balance<<endl;
            }
            else if(choice==2){
            cout<<"enter amount to deposit : ";
            cin>>amount;
            balance= balance+amount;
            cout<<"updated balance: "<<balance<<endl;
            }
            else if(choice==3){
            cout<<"enter amount to withdraw: ";
            cin>>amount;
            if(amount<=balance && amount>0){
            balance= balance-amount;
            cout<<"remaining balance: "<<balance<<endl;
            }
            else{ cout<<"insufficient balance"<< endl;}
            }
            else if(choice==4){
            cout<<"thank you for using ATM "<<endl;
            break;
            }
            else{
            cout<<"invalid choice"<<endl;
            }}}
            else {cout<<"too many incorrect attempts.access denied"<<endl;}
    }
   
