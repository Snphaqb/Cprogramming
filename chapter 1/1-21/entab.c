#include<stdio.h>

#define TABW 8

int main(){
    int c,col = 0,blanks = 0;
    while((c = getchar()) != EOF){
        if(c == ' '){
            blanks++;
            continue;
        }
        if(blanks == 1){
            putchar(' ');
        }
        else if(blanks > 1){
            int spaceTillNextTab = TABW - col % TABW;
            int tabs = (blanks- spaceTillNextTab) /TABW + 1;
            int spaces = tabs >= 1 ? (blanks- spaceTillNextTab) % TABW : blanks;
            for(int i=0;i<tabs;i++)
                putchar('\t');
            for(int i=0;i<spaces;i++)
                putchar(' ');
            col += blanks;
        }
        blanks = 0;
        col++;
        putchar(c);
        if(c == '\n')
            col = 0;
    }
}
