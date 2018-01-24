#include<stdio.h>
#include<stdlib.h>

#define MAXLINE 100

char * reverse(char * s){
    int length = 1; 
    while(*++s)
        length++;
    s--;// because s is pointing to '\0' 
    char * res = malloc(sizeof(char) * length);
    for(int i=0;i<length;i++)
        *res++ = *s--;
    *res = '\0';
    return res-length;
}
int getline2(char * res){
    int c;
    while(c != EOF && (c = getchar()) != '\n'){
        *res++ = c;
    }
    *res = 0;
    return c;
}
int main(){
    char * array = malloc(sizeof(char) * MAXLINE);
    while(getline2(array) != EOF)
        printf("%s\n", reverse(array));
}
