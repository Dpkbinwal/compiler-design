%{
    #include stdio.h;
    #include string.h;
    int i=0;
%}

%%
([1-9a-zA-Z])* { i++; }
"/n" { printf("%d",i); i=0;}
%%

int yywrap(void);

int main(){
    yylex();
    return 0;
}
