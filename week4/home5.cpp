#include<iostream>
using namespace std;
main(){
int noofholidays;
int normsleepingtime=30000;
cout<<"enter the number of holidays: ";
cin>>noofholidays;
int workingdays= 365 - noofholidays;
int timetoplay=(workingdays*63) + (noofholidays*127);
int diff=30000 - timetoplay;
int hours = diff/60;
int mint = diff%60;
if(normsleepingtime >= timetoplay){
    cout<<"tom sleeps well ";
    cout<<hours<<"hour and"<<mint<<"minutes is less for play";
}
else{
    cout<<"tom will run away";
    cout<<hours<<"hour and"<<mint<<"minutes is more for play";
}

}