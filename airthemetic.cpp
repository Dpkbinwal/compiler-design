#include <bits/stdc++.h>
using namespace std;

bool isoperator(char str){
    char operators[6] = {'+', '-', '*', '/', '(', ')'};
    for(int i=0;i<6;i++){
        if(str== operators[i]) return true;
    }
    return false;
}
bool isnumber(string str){
    for(int i=0;i<str.length();i++){
        if(!isdigit(str[i])) return false;
    }
    return true;
}

void analyze(string str){
    string token="";
    for(int i=0;i<str.length();i++){
        if(str[i]== ' '){
            if(isoperator(token[0])){
                cout<< token << " is operator"<<endl;
            }else if(isnumber(token)){
                cout<<token<< " is number"<<endl;
            }
            token=" ";
        }
        else token+=str[i];
    }
     if(isoperator(token[0])){
                cout<< token << " is operator"<<endl;
            }
     else if(isnumber(token)){
                cout<<token<< " is number"<<endl;
            }
    

}
int main(){
    string str="2*(3+4)/5-1";

    analyze(str);
}
