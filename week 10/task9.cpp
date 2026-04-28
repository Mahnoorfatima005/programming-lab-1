#include<iostream>
using namespace std;
int condition(int h,int min);
main()
{
int h, min;
cout<<"enter hours ";
cin>>h;
cout<<"Enter minutes ";
cin>>min;
condition(h,min);
}
int condition(int h,int min)
{
    min=min+15;
   if(min>=60)
   {
    min=min-60;
    h=h+1;
   }
   if(h>=24)
   {
    h=0;
   }
   if(h<10)
   {
    cout<<"0";
   }
   cout<<h<<":";
    if(min<10)
    {
        cout<<"0";
    }
     cout<<min<<endl;
}