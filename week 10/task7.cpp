#include<iostream>
using namespace std;
int digit1,digit2,digit3,digit;
int condition(int digit);
main()
{
  int digit;
  cout<<"Enter Three digits ";
  cin>>digit;
  digit1=digit%10;
  digit=digit/10;
  digit2=digit%10;
  digit=digit/10;
  digit3=digit%10;
 condition(digit);
}
int condition(int digit)
{
  if(digit1==digit3)
  {
    cout<<"The number is symemetrical ";
  }
  else
  cout<<"The number is not symmetrical ";
}