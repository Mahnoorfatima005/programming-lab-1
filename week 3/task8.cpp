#include <iostream>
using namespace std;
main()
{
float voltage;
cout<<"Enter voltage (in volts): ";
cin>>voltage;
float current;
cout<<"Enter current (in Amperes): ";
cin>>current;
float power_in_watts = voltage*current;
cout<<voltage*current<<"is equal to"<<power_in_watts;}