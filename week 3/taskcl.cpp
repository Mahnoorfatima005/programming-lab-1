#include <iostream>
using namespace std;
main(){
string name;
int roll_number;
string section;

cout<<"Enter your name: ";
cin>>name;
 
cout<<"Enter your roll number: ";
cin>>roll_number;

cout<<"Enter your section: ";
cin>>section;

cout<<"\n--- Student Info ---" <<endl;
cout<<"Name: "<<name<<endl;
cout<<"Roll Number: "<<roll_number<<endl;
cout<<"Section: "<<section<<endl;
return 0;
}