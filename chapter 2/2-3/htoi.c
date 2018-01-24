#include<stdio.h>
int pow2(int a, int b){
    if(b == 0)
        return 1;	    
    int res = a;
    for(int i=1;i<b;i++){
        res *= a;
    }
    return res;
}
int hexToDec(char c){
    if( c >= '0' && c <= '9')
        return c - '0';
    if(c >= 'a' && c <= 'f')
        return c - 'a' + 10;
    if(c >= 'A' && c <= 'F')
        return c - 'A' + 10;
}
int htoi2(char *s){
    int res = 0;	
	//skip 0x and 0X
    if(*s == '0')
	  s++;
    if(*s == 'x' || *s == 'X')
	  s++;
    char * temp = s;
    while(*s++);// move to the end of the string (plus one)
    s -= 2; // go back to the char before '\0'
    int length = s - temp; // length of the number - 1 
    for(int i=0;i<=length;i++){
    	res += hexToDec(*s--) * pow2(16,i);
    }
    return res;
}

int main(){
	printf("%d\n",htoi2("0xFAFAFA"));
}
