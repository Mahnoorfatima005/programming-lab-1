#include <iostream>
using namespace std;
main()
{
int current_population;
cout<<"Enter the current world population: ";
cin>>current_population;
int birth_rate;
cout<<"Enter the monthly birth rate: ";
cin>>birth_rate;
int population_in_3decades = current_population*birth_rate*3;
cout<<"population in 3 decades will be"<<population_in_3decades;}