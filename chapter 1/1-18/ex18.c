#include<stdio.h>

int processLine();
int main(){
    while(processLine() != EOF);
}

int processLine(){
    int c;
    int notEmpty = 0;
    while((c = getchar()) != '\n'){
        if(c == EOF)
            return EOF;
        if( (c == '\t' || c == ' ') && !notEmpty)
            continue;
        putchar(c);
        notEmpty = 1;
    }    
    if(notEmpty)
        putchar('\n');
    return c;
}
