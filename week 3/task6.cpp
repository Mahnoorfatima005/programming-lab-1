#include <iostream>
using namespace std;
main()
{
int megabytes;

cout<<"Enter the size in megabytes: ";
cin>>megabytes;
int bits = megabytes * 8388608;
cout<<"megabytes"<<megabytes<<endl;
cout<<"megabytes * bits"<<bits<<endl;
}