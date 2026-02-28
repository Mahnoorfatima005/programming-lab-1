#include <iostream>
using namespace std;
main()
{
string name;
int matric_marks;
int intermediate_marks;
int ecat_marks;

cout<<"Enter student name: ";
cin>>name;
cout<<"Enter matric marks: ";
cin>>matric_marks;
cout<<"Enter intermediate marks: ";
cin>>intermediate_marks;
cout<<"Enter ecat marks: ";
cin>>ecat_marks;
float aggregate = (matric_marks/1100)*0.1+(intermediate_marks/1200)*0.4+(ecat_marks/400)*0.5;
cout<<"ecat aggregate of"<<name<<"is"<<aggregate;
}