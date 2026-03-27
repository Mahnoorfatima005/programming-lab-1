#include<iostream>
using namespace std;
int main(){
    string books[100];
    bool borrowed[100];
    int count=0;
    int choice=0;
    while(choice !=5){
    cout<<"=====LIBRARY MENU====="<<endl;
    cout<<"1.add books"<<endl;
    cout<<"2.view books"<<endl;
    cout<<"3.borrow books"<<endl;
    cout<<"4.view available books"<<endl;
    cout<<"5.exit"<<endl;
    cout<<"enter choice: ";
    cin>>choice;
    
    if(choice==1){
    int n;
    cout<<"how many books to add: ";
    cin>>n;
    cin.ignore();
     
    for(int i=0;i<n;i++){
    cout<<"enter book name: ";
    getline(cin,books[count]);
    borrowed[count]=false;
    count++;
    }}
    else if(choice==2){
    cout<<"All books:"<<endl;
    for(int i=0;i<count;i++){
    cout<<i+1<<"."<<books[i];
    if(borrowed[i]==true)
    cout<<"(borrowed)";
    cout<<endl;
    }
    }
    else if(choice==3){
    int num;
    cout<<"enter book number to borrow: ";
    cin>>num;
    if(num>0 && num<=count){
    if(borrowed[num-1]==false){
        borrowed[num-1]=true;
        cout<<"book borrowed!"<<endl;
    }
    else{cout<<"already borrowed!"<<endl;}
    }
    else{cout<<"invalid number!"<<endl;}
    }
    else if(choice==4){
    cout<<"available books:"<<endl;
    for(int i=0;i<count;i++){
        if(borrowed[i]==false){
        cout<<i+1<<"."<<books[i]<<endl;
        }
    }
    }
    else if(choice==5){
    cout<<"exit...."<<endl;
    }
    else {
        cout<<"wrong choice"<<endl;
    }
    
    }
}