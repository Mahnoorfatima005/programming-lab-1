#include<iostream>
#include<cmath>
using namespace std;

void solveQuadritic (float a, float b, float c);
int main(){
    cout <<"enter the value of a: ";
    float a;
    cin>>a;
    cout << "enter the value of b: ";
    float b;
     cin>>b;
    cout << "enter the value of c: ";
    float c;
    cin>>c;
    float power=pow(b,2);
    float deter=power-4*a*c;
    if(deter==0){
        float root=-b/(2*a);
        cout<<root;
    }
    else{
        solveQuadritic(a,b,c);
    }
    return 0;
}
void solveQuadritic (float a, float b, float c){
    float power=pow(b,2);
    float deter=power-4*a*c;
    if(deter>0){
        float root1=(-b+sqrt(deter))/(2*a);
        float root2=(-b-sqrt(deter))/(2*a);
        cout<<"the roots are : "<<root1<<" and "<<root2;
    }
    else{
       float realPart=-b/(2*a);
       float imagPart=sqrt(-deter)/(2*a);
       cout <<"complex roots are : "<<endl;
       cout <<"x"<<realPart<<" + "<<imagPart<<"i"<<endl;
       cout <<"x"<<realPart<<" - "<<imagPart<<"i"<<endl;
    }
}
