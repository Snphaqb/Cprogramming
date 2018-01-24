#include<stdio.h>
#include<stdlib.h>
#define MAXLINE 1000
#define TARGET 80
// Print all input lines longer than TARGET
int main(){
    while(1){
        char * array = malloc(sizeof(char) * MAXLINE);
        char * temp = array;
        while((*temp++ = getchar()) != '\n'){
         if(*(temp - 1) == EOF)
          return 0;   
        }
        *temp = '\0';
        if(temp - array >= TARGET)
            printf(array);
        free(array);
    }
}
