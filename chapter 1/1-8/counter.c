#include<stdio.h>

/*count blanks, tabs and newlines in input */

int main(){
    int blanks = 0, tabs = 0, newlines = 0, c;

    while((c = getchar()) != EOF){
        if(c == '\n')
            newlines++;
        if(c == '\t')
            tabs++;
        if(c == ' ')
            blanks++;
    }
    printf("tabs: %d\n",tabs);
    printf("newlines: %d\n", newlines);
    printf("blanks: %d\n", blanks);
}
