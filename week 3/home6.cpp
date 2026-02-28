#include <iostream>
using namespace std;
main()
{
int size;
cout<<"Enter the size of fertilizer bag in pounds: ";
cin>>size;
int cost;
cout<<"Enter the cost of the bag: ";
cin>>cost;
int area;
cout<<"Enter area in square feet that can be covered by bag: ";
cin>>area;
int cost_per_pound = cost / size;
int cost_per_square_foot = cost / area;
cout<<"cost of fertilizer per pound is =="<<cost_per_pound;
cout<<"cost of fertilizer per square foot is =="<<cost_per_square_foot;}