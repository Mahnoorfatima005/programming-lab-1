#include<iostream>
using namespace std;
int value1=2;
int value2=4;
int sum()
{
    int value=20;
    return value1+value2;
}
main()
{
int x=value1;
value1=3;
x=6;
value2=sum();
cout<<value1<<" "<<value2;
}