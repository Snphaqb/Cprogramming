#include<stdio.h>

/* replace multiple blanks for one */

int main(){
    int c, temp; 
    while((c = getchar()) != EOF){
        if(c == ' ' && temp == ' ')
            continue;
        putchar(c);
        temp = c; // hold last value
    }
}
