#include<stdio.h>
#define MAXLEN 17

int main(){
    int c, count=0, lengths[MAXLEN];

    for(int i=0;i<MAXLEN;i++) lengths[i] = 0;

    while( (c = getchar()) != EOF ){
        if(c != ' ' && c != '\n' && c != '\t'){
            count++;
        }else{
            lengths[count]++;
            count = 0;
        }
    }
    for(int i=0;i<MAXLEN;i++){
        printf("%d",i);
        for(int k=0;k<lengths[i];k++){
            putchar('-');
        }
        putchar('\n');
    }
}
