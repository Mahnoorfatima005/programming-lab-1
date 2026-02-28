#include <iostream>
using namespace std;
main()
{
float veg_price_per_kg;
cout<<"Enter the vegetable price per kilogram (in coins): ";
cin>>veg_price_per_kg;
float fruit_price_per_kg;
cout<<"Enter the fruit price per kilogram (in coins): ";
cin>>fruit_price_per_kg;
int total_kg_veg;
cout<<"Enter total kilogram of vegetable: ";
cin>>total_kg_veg;
int total_kg_fruit;
cout<<"Enter total kilogram of fruit: ";
cin>>total_kg_fruit;
int total_earning_Rps = (veg_price_per_kg / 1.94)*total_kg_veg + (fruit_price_per_kg / 1.94)*total_kg_fruit;
cout<<"total earning in rupees is =="<<total_earning_Rps;}