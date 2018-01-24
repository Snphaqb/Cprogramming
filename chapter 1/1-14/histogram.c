#include<stdio.h>
#include<stdlib.h>
// Use a linked list for no particular reason, i just wanted to use a linked list
typedef struct node{
    char data;
    int count;
    struct node * next;
}node;

void add(node * head, char c){
    while(head->next != NULL){
        if(head->data == c)
            break;
        head = head->next;
    }
    if(head->data == c)
        head->count++;
    else{
        head->next = malloc(sizeof(node));
        head->next->count = 1;
        head->next->data = c;
        head->next->next = NULL;
    }
}
int main(){
    int c; 
    node * head = malloc(sizeof(node));
    head->data = getchar();
    head->count = 1;
    head->next = NULL;
    while( (c = getchar()) != EOF ){
        add(head,c);
    }
    while(head->next != NULL){
        printf("%c",head->data);
        for(int i=0;i<head->count;i++) putchar('-');
        head = head->next;
        putchar('\n');
    }
}
