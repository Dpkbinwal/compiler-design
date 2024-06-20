#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void parse(char *str){
    int left=0,right=0;
    int len=strlen(str);

    while(right<=len && left<=right){
        if(isDelimiter(str[right])) printf("'%c' is separator",str[right]);

        if (isDelimiter(str[right]) == false)
			right++;
        
        if(isDelimiter(str[right])==true && left==right){
            if(isOperator(str[right])==true){
                printf("'%c' is operator",str[right]);
            }
            right++;left=right;
        }
        else if(isDelimiter(str[right])==true && left==right){}

    }
}

int main(){
    char str[100];
    gets(str);
    parse(str);
    return 0;
}