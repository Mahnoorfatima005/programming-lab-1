#include<iostream>
using namespace std;
main(){

    int n;
    cout<<"enter the total counts: ";
    cin>>n;
   int count1=0,count2=0,count3=0,count4=0,count5=0;
    
    for(int i=0;i<n;++i){
        int num;
        cin>>num;
        if(num<200){
           count1++;
        }
        else if(num>=200 && num<=399){
            count2++;
        }
        else if(num>=400 && num<=599){
            count3++;
        }
        else if(num>=600 && num<=799){
            count4++;
        }
        else{count5++;}
    }
    cout<<std::setprecision(2);
    double p1=count1*100 /n;
    double p2=count2*100 /n;
    double p3=count3*100 /n;
    double p4=count4*100 /n;
    double p5=count5*100 /n;

     cout<<p1<<"%" <<endl;
     cout<<p2<<"%" <<endl;
     cout<<p3<<"%" <<endl;
     cout<<p4<<"%"<<endl;
     cout<<p5<<"%"<<endl;
     return 0;
}