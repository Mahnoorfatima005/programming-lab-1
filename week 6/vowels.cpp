#include<iostream>
#include<string>
using namespace std;

string removeVowels(string str){
    string result="";
for(char c : str){
    char lowerC = tolower(c);
    if(lowerC !='a'  && lowerC !='e'  && lowerC !='i'  && lowerC !='o'  && lowerC !='u')
   { result +=c;
}
} return result;
}
main(){
    string input;
    cout<<"input: ";
    getline(cin,input);
    cout<<"output: "<<removeVowels(input)<<endl;
}