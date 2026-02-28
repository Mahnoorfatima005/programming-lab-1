#include <iostream>
using namespace std;
main()
{
int i;
cout<<"Enter imposter count(i): ";
cin>>i;
int p;
cout<<"Enter player count(p): ";
cin>>p;
int chances_imposter = (i/p)*100;
cout<<"chances of being imposter =="<<chances_imposter;}