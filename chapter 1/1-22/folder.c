#include<stdio.h>
#include<stdlib.h>

#define MAXLENGTH 20
#define MAXLINE 100

int getline2(char * res, int * length){ // get line into res, return last char
    int c;
    char * temp = res;
    while(c != EOF && (c = getchar()) != '\n'){
        *res++ = c;
    }
    *res = 0;
    *length = res - temp;
    return c;
}
int fold(char *s, int length){
    char * temp = s;
    int thisLength = 0;
    s += MAXLENGTH;
    while(*s-- != ' ' && s > temp);
    s++;
    if(s == temp){ //no blank space before max length
        while(putchar(*temp++) && temp <= s+MAXLENGTH);
        putchar('\n');
        thisLength = MAXLENGTH;
    }else{
        thisLength = s - temp;
        *s = '\n';
        while(temp <= s && putchar(*temp++));//print through temp till reaching s
    }
    printf("nl %d\n",length-thisLength);
    if(length - thisLength > MAXLENGTH)
        fold(s+1,length - thisLength);
    else(printf("%s\n"), s);
}
int main(){
    char * arr = malloc(MAXLINE * sizeof(char));
    int length = 0;
    while(getline2(arr, &length) != EOF){
        if(length <= MAXLENGTH)
            printf("%s\n",arr);
        else{
            fold(arr, length);
        }

    }
}
