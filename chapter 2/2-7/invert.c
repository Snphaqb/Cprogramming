#include<stdio.h>
//invert(x,p,n), invert n bits of x starting from p
int invert(unsigned x,int p,int n){
    int mask = ~(~0 << n) << p+1-n;// a mask with ones at the positions i need to change
    int temp = x & mask;// now temp has the positions i need to change
    x &= ~mask; // now x has 0s at the positions i need to change
    temp = ~temp; // now temp has the positions that i need to change inverted, but also has ones in every other position
    temp &= mask; // now temp only has the positions i need to change inverted and all other bits set to 0.
    return x | temp;
}
int main(){
    //test invert(), invert two bits starting from the third bit of 110011 (51)
    //result should be 111111 (63)
    printf("%d\n",invert(51,3,2));
    //invert 3 bits starting with the fourth bit of 10101010 (170), should be 10110110 (182)
    printf("%d\n",invert(170,4,3));
}
