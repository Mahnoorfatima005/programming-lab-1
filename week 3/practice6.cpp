#include <iostream>
using namespace std;
main()
{
int sq_meter;
cout<<"Enter the number of square meters that you can paint: ";
cin>>sq_meter;
int width;
cout<<"Enter width of single wall in meters: ";
cin>>width;
int height;
cout<<"Enter height of single wall in meters: ";
cin>>height;
int total_walls = sq_meter / (width*height);
cout<<"number of walls you can paint are =="<<total_walls;}