#include<iostream>
using namespace std;
main(){
    double m;
    int ty;
    cout<<"enter amount of money: ";
    cin>>m;
    cout<<"enter the year: ";
    cin>>ty;
    double totalSpent=0;
    int ivanAge=18;
    for(int y=1800;y<=ty;y++){
        if(y%2==0){
            totalSpent +=12000;
        }else{totalSpent +=(12000+50*ivanAge);}
        ivanAge++;
    }
    if(m>=totalSpent){
        double moneyLeft=m-totalSpent;
        cout<<"yes! he will live carefree life and will have "<< moneyLeft << "dollars left"<<endl;
    }
    else{
        double moneyNeeded=totalSpent - m;
        cout<<"he will need"<< moneyNeeded <<"dollars to survive"<<endl;
    }
}