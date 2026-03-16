#include<iostream>
using namespace std;
main(){
    string figtype;
    cout<<"enter the type of figure: ";
    cin>>figtype;
    double area=0.0;
    if(figtype=="square"){
        double side;
        cout<<"enter side: ";
        cin>>side;
        area = side*side;
    }
    else if(figtype=="rectangle"){
        double length,width;
        cout<<"enter length and width: ";
        cin>> length >>width;
area= length*width;
    }

    else if(figtype=="circle"){
        double r;
        cout<<"enter radius: ";
        cin>>r;
        area=3.14*r*r;
 }
 else if(figtype=="triangle"){
    double b,h;
    cout<<"enter base and height: ";
cin>> b>>h;
area=0.5*b*h;
 }
 cout<<"area is"<<area<<endl;
}