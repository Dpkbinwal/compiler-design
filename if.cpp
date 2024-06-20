#include<bits/stdc++.h>
using namespace std;

bool isIdentifier(string str){
    if(!isalpha(str[0])) return false;
    for(int i=0;i<str.length();i++){
        if(!isalnum(str[i])) return false;
    }
    return true;
}

bool isKeyword(string str){
    string keyword[3]={ "if","else","while"};
    for(int i=0;i<3;i++){
        if(str==keyword[i]) return true;
        
    }
    return false;
}
void analyze(string input){
    string token="";
    for(int i=0;i<input.length();i++){
        if(input[i]== ' ' ){
            if(isKeyword(token)){
                cout<<token<< "is a keyword"<<endl;
            }
            else if(isIdentifier(token)){
                cout<<token << " is a identifier"<<endl;
            }
            token=" ";
        }
        else{
            token+=input[i];
        }
    }
     if(isKeyword(token)){
                cout<<token<< "is a keyword"<<endl;
            }
            else if(isIdentifier(token)){
                cout<<token << " is a identifier"<<endl;
            }
}


int main(){
    string input;
    getline(cin,input);
    analyze(input);
}