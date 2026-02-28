#include <iostream>
using namespace std;
main()
{
int charge;
int time;

cout<<"Enter the charge in coloumbs: ";
cin>>charge;
cout<<"Enter the time in seconds: ";
cin>>time;
float current = charge / time;
cout<<"charge"<<charge<<endl;
cout<<"time"<<time<<endl;
cout<<"charge / time "<<current<<endl;
}