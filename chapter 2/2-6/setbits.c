#include<stdio.h>
//setbits: set n bits of x starting at p to the rightmost n bits of y
// ex, setbits(1001,2,2,11) should be 1111
unsigned int setbits(unsigned int x, int p, int n, unsigned int y){
   x &= ~(~(~0 << n) << p+1-n);//now the positions i need to change are set to 0, the others are left intact.
   y &= ~(~0 << n);//get the n right most bits of y
   y <<= p+1-n;//shift the n right most bits of y to align them with the n spaces starting at p in x
   return x | y;
}
int main(){
    printf("%d",setbits(195,5,4,15)); // set 4 bits starting from position 5 of 11000011 to the last 4 bits of 
    //1111
}
