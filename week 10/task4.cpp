#include<iostream>
#include<cmath>
using namespace std;
int height(int distance,int angle);
int main(){
    int distance,angle;
    cout <<"enter the distance: ";
    cin>>distance;
    cout <<"enter the angle: ";
    cin>>angle;
   height(distance,angle);
    
}
int height(int distance,int angle){
    float one_radian=57.298;
    float radian=angle/one_radian;
    float height=distance*tan(radian);
    cout <<"height of the tree is : "<<height;
    return 0;
}
