#include<iostream>
using namespace std;
main(){
    while(true){
        int choice;
        string bkName;
        cout<<"----LIBRARY SYSTEM----"<<endl;
        cout<<"1.add book"<<endl;
        cout<<"2.view book"<<endl;
        cout<<"3.borrow book"<<endl;
        cout<<"4.issue book"<<endl;
        cout<<"5.exit"<<endl;

        cout<<"enter your choice: ";
        cin>>choice;

        if(choice==1){
            cout<<"enter your book name: ";
            cin>>bkName;
            cout<<"you added a book: "<<bkName<<endl;
        }
        if(choice==2){
            cout<<"view book"<<endl;}
        if(choice==3){cout<<"borrow book"<<endl;}
        if(choice==4){cout<<"issue book"<<endl;}
        if(choice==5){cout<<"exit"<<endl;}
    }
}