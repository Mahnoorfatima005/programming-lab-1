#include<iostream>
using namespace std;
main(){
    string input;
    cout<<"enter string: ";
    cin>>input;
    for(int i=0;i<input.length();i++){
        char c=input[i];

        if(c>='a' && c<='z'){
            if(c=='z')input[i]='a';
            else input[i]=c+1;
        }
        else if (c>='A'  && c<='Z'){
            if(c=='Z') input[i]='A';
            else input[i]=c+1;
        }
    }
    cout<<"shifted string : "<<input<<endl;

}