#include <iostream>
using namespace std;
main()
{
int age;
cout<<"Enter the person age: ";
cin>>age;
int moves;
cout<<"Enter the number of times they have moved: ";
cin>>moves;
int duration = age / (moves + 1);
cout<<"average number of years they lived in a house is ==" <<duration;}