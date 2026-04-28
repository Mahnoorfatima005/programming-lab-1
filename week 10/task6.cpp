#include<iostream>
using namespace std;
void condition(char alp);
main()
{
    char alp;
    cout<<"Enter a character A/a ";
    cin>>alp;
    condition( alp);
}
void condition(char alp)
{
    if(alp>='a'&&alp<='z')
    {
    cout<<"You have entered small "<<alp;
    }
    else
    cout<<"You have entered Capital "<<alp;
}
