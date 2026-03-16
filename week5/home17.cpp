#include<iostream>
using namespace std;
main(){
    while(true){
        int choice,n1,n2;
        cout<<"----SIMPLE CALCULATOR----"<<endl;
        cout<<"1.addition"<<endl;
        cout<<"2.subtraction"<<endl;
        cout<<"3.multiplication"<<endl;
        cout<<"4.division"<<endl;
        cout<<"5.clear screen"<<endl;
        cout<<"6.exit"<<endl;

        cout<<"enter your choice: ";
        cin>>choice;
        cout<<"enter first number: ";
        cin>>n1;
        cout<<"enter second number: ";
        cin>>n2;
        if(choice==1){
            double add=n1+n2;
            cout<<"result: "<< add <<endl;
        }
        if(choice==2){
            double sub= n1-n2;
            cout<<"result: "<<sub<<endl;
        }
        if(choice==3){
            double x = n1*n2;
            cout<<"result: "<<x<<endl;
        }
        if(choice==4){
            double divide = n1 / n2;
            cout<<"result: "<<divide<<endl;
        }
        if(choice==5){
          
            cout<<"clearScreen"<<endl;

        }
        else{
            cout<<"exit"<<endl;
        }
    }
}