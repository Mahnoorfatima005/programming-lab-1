#include<iostream>
using namespace std;
int sum=0,i;
int add(int num[5]);
int condition(int sum);
main()
{
    int num[5];
    cout<<"enter 5 numbers "<<endl;
    add(num);
    condition(sum);

}
int add(int num[5])
{
  for(i=0;i<5;i++)
  {
    cin>>num[i];
    sum=sum+num[i];
  }
}
int condition(int sum)
{
  if(sum%2==0)
  {
    cout<<"Evenish ";
  }
  else
  cout<<"Oddish";
}