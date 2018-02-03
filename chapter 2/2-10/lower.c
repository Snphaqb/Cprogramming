#include<stdio.h>
int lower(char c){
    return c >= 'A' && c <= 'Z' ? 'a' + c - 'A' : c;
}
int main(){
    printf("%c\n", lower('A'));
    printf("%c\n", lower('Z'));
    printf("%c\n", lower('5'));
}
