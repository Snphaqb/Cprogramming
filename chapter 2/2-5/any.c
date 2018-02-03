#include<stdio.h>


int isIn(char c, char *s){
    while(*s && *s != c)
        s++;
    if(*s)
        return 1;
    return 0;
        
}
//Return the first location in the string s1 where any character from string s2 occurs or -1 if 
//s1 contains no characters from s2
int any(char *s, char *s2){
    int i = 0;
    while(*(s+i))
        if(isIn(*(s+i++),s2))
            return i-1;
    return -1;
}

int main(){
    char str1[] = "AAABBCC";
    char str2[] = "B";
    printf("%d\n",any(str1,str2));//should be 3 
}
