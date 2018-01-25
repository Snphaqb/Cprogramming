#include<stdio.h>

//Delete each character in s1 that matches any character in s2

int isIn(char c, char *s){
    while(*s && *s != c)
        s++;
    if(*s)
        return 1;
    return 0;
        
}
void squeeze(char *s, char *s2){
    char * t = s;
    while(*s){
        if(!isIn(*s,s2))
            *t++ = *s;
        s++;
    }
    *t = '\0';
}

int main(){
    char str1[] = "AABBCC";
    char str2[] = "B";
    squeeze(str1,str2);
    printf(str1);
    putchar('\n');
}
