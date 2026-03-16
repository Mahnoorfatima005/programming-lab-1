#include<iostream>
using namespace std;
main()
{
    string my_password,user_enter;
    my_password="pass@123!";
    cout<<"Enter the password: ";
    cin>>user_enter;
    if(user_enter==my_password){
        cout<<"Wow ! you have cracked te code!";
    }
    else{
        cout<<"Its not that simple! try again";
    }
}