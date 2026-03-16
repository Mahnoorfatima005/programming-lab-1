#include<iostream>
using namespace std;
main(){
    string username,password;
    string studentName="";
    int studentAge=0;
    string courseName="";
    int choice;
    for(int i=1;i<=3;i++){
cout<<"enter username: ";
cin>>username;
cout<<"enter password: ";
cin>>password;
if(username=="admin"&& password=="1234"){
    cout<<"login successful"<<endl;
    break;
}
else{
    cout<<"wrong login"<<endl;
}
if(i==3&&!(username=="admin"&& password=="1234")){
    cout<<"too many attempts.program ends"<<endl;
    return 0;
}
    }
    for(int i=1;i<=5;i++){
        cout<<endl<<"----University Management System----"<<endl;
        cout<<"1.Add student"<<endl;
        cout<<"2.View student"<<endl;
        cout<<"3.Add course"<<endl;
        cout<<"4.Exit"<<endl;

        cout<<"Enter choice: ";
        cin>>choice;
        if(choice==1){
            cout<<"Enter student name: ";
            cin>>studentName;

            cout<<"Enter student age: ";
            cin>>studentAge;
            cout<<"Student added successfully"<<endl;
        }
        else if(choice==2){
            if(studentName!=""){
                cout<<"student name: "<<studentName<<endl;
                cout<<"student age: "<<studentAge<<endl;
            }
            else{
                cout<<"no student record found"<<endl;
            }}
            else if(choice==3){
cout<<"Enter course name: ";
cin>>courseName;
cout<<"course added: "<<courseName<<endl;
            }
            else if(choice==4){
                cout<<"program exit"<<endl;
                break;
            }
            else{
                cout<<"invalid choice"<<endl;
            }
        }
    }
