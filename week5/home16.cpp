#include<iostream>
using namespace std;
main(){
    while(true){
        int choice;
        cout<<"====RESTAURANT MANAGEMENT SYSTEM===="<<endl;
        cout<<"1. view food menu"<<endl;
        cout<<"2. place order"<<endl;
        cout<<"3. view order status"<<endl;
        cout<<"4. generate bill"<<endl;
        cout<<"5. contact staff"<<endl;
        cout<<"6. exit"<<endl;
        cout<<"enter your choice: ";
        cin>>choice;
        if(choice==1){cout<<"you selected :"<<"view food menu"<<endl;}
        if(choice==2){cout<<"you selected :"<<"place order"<<endl;}
        if(choice==3){cout<<"you selected :"<<"view order status"<<endl;}
        if(choice==4){cout<<"you selected :"<<"generate bill"<<endl;}
        if(choice==5){cout<<"you selected :"<<"contact staff"<<endl;}
        if(choice==6){cout<<"exit"<<endl;}
    }
}