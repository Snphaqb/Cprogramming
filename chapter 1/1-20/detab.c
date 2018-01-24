#include<stdio.h>
#define TABW 8

int main(){
    int c, column,spaces;
    while((c = getchar()) != EOF){
        if(c == '\t'){
            spaces = TABW - column % TABW;
            for(int i=0;i<spaces;i++)
                putchar(' ');
            column += spaces;
            continue;
        }
        column++;
        if(c == '\n'){
            column = 0; 
        }
            putchar(c);
    }
}
