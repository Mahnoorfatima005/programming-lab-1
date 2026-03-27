#include<iostream>
using namespace std;
main(){
    string word;
    char letter;
    bool isFound=false;
    cout<<"enter the word: ";
    cin>>word;
    cout<<"enter the character you want to find: ";
    cin>>letter;
    for( int i=0; word[i] !='\0';i++){
        if(word[i]==letter){

            isFound= true;
            break;
        }

        
    }
    if(isFound){
        cout<<letter <<"is found in "<<word<<endl;

    } else{ cout<<letter<<" is not found in"<<word<<endl;}

}