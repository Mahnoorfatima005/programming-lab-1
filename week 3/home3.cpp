#include <iostream>
using namespace std;
main()
{
int initial_velocity;
cout<<"Enter initial velocity: ";
cin>>initial_velocity;
int acceleration;
cout<<"Enter acceleration: ";
cin>>acceleration;
int time;
cout<<"Enter time: ";
cin>>time;
int final_velocity = (acceleration*time) + initial_velocity;
cout<<"final_velocity =="<<final_velocity;}