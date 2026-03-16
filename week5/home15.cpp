#include<iostream>
using namespace std;
main(){
    while(true){
        int choice;
        cout<<"\n====MENU===="<<endl;
        cout<<"1. say hello"<<endl;
        cout<<"2. say goodbye"<<endl;
        cout<<"enter your choice: ";
        cin>>choice;

    if(choice==1){
        cout<<"HELLO! welcome to the program"<<endl;
    }else if(choice==2){
        cout<<"GOODBYE! have a nice day "<<endl;
    }else if(choice==3){
        cout<<"program ended"<<endl;
    }
    else{cout<<"invalid choice!"<<endl;}
    }
}