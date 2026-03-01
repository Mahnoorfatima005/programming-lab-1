#include <iostream>
using namespace std;
main()
{
int minutes;
cout<<"Enter number of minutes: ";
cin>>minutes;
int fps;
cout<<"Enter fps: ";
cin>>fps;
int total_frames = minutes*fps*60;
cout<<"total frames == "<<total_frames;}