#include<iostream>
#include<string>
using namespace std;
main(){
    int numChords;
    cout<<"enter the number of chords: ";
    cin>>numChords;
    string chords[numChords];
    cout<<"enter"<<numChords<<"chords,one per line:"<<endl;
    for(int i=0;i<numChords;i++){
        cin>>chords[i];
    }
    for(int i=0;i<numChords;i++){
        string currentChord =chords[i];
        int length= currentChord.length();
        if(length==0 || currentChord[length -1] !='7'){ chords[i] = currentChord + "7";}
    }
    cout<<"jazzified chords: [";
    for(int i=0;i<numChords;i++){
        cout<<chords[i];
        if(i<numChords -1 ){ cout<<",";}
    }
    cout<<"]"<<endl;
    return 0;
}
