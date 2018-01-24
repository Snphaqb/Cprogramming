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
    switch(c){
	    case '0': return 0; break;
	    case '1': return 1; break;
	    case '2': return 2;break;
	    case '3': return 3;break;
	    case '4': return 4;break;
	    case '5': return 5;break;
	    case '6': return 6;break;
	    case '7': return 7;break;
	    case '8': return 8;break;
	    case '9': return 9;break;
	    case 'a': return 10;break;
	    case 'b': return 11;break;
	    case 'c': return 12;break;
	    case 'd': return 13;break;
	    case 'e': return 14;break;
	    case 'f': return 15;break;
	    case 'A': return 10;break;
	    case 'B': return 11;break;
	    case 'C': return 12;break;
	    case 'D': return 13;break;
	    case 'E': return 14;break;
	    case 'F': return 15;break;
    }
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
