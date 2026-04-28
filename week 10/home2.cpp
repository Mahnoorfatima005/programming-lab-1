#include<iostream>
using namespace std;
string Volume(float l, float w, float h, string unit);
main()
{
    int length,width,height;
    string unit;
    cout<<"enter length ";
    cin>>length;
    cout<<"enter width ";
    cin>>width;
    cout<<"enter height ";
    cin>>height;
    cout<<"enter unit " ;
    cin>>unit;
    Volume(length,width, height, unit);
    cout<<Volume(length,width,height,unit);

}
string Volume(float length, float width, float height, string unit)
{
    double volume = (length* width * height) / 3.0; 
    if(unit == "millimeters")
        volume = volume * 1000000000;   
    else if(unit == "centimeters")
        volume = volume * 1000000;    
    else if(unit == "kilometers")
        volume = volume / 1000000000;   

    return to_string(volume) + " cubic " + unit;
}