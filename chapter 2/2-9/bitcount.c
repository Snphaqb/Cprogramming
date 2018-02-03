/* 2-9 explain why x &= (x-1) deletes the rightmost 1-bit 
 the rightmost bit is always deleted because when you subtract 1 from x
 if the rightmost bit is a 1 bit it will be set to 0, and when you & both values you will get the same number
 with the leftmost bit set to 0 (because 1 & 0 = 0)
 if the rightmost 1-bit is not the rightmost bit, when you subtract the rightmost 1-bit will be set to 0 
 and the bits to the right of it would be (10) then 1
 x=      101010
         -    1   in the example the rightmost 1-bit is the one in the position 1 (we start counting from 0)
         -------  because we can't subtract 1 from 0, we turn the rightmost 1 into a 0 and the rightmost 0    
 x-1=    101001   into a 10 then, 10 - 1 = 1.
 as in the original number (101010) the rightmost bit is 0, we don't care about the rightmost bit being one
 after the subtraction, so when we & both values.
 x=     101010
 x-1=   101001
        ------
 x&(x-1)101000 the rightmost bit will always be set to 0 while the rest of the bits remains the same
*/
#include<stdio.h>
//Use this observation to write a faster version of bitcount
//bitcount: count 1 bits in x
//as x &= x-1 always deletes the rightmost bit, we only need to iterate doing it until the number becomes 0
int bitcount(unsigned x){
    int n = 0;
    while( x != 0){
        x &= (x-1);
        n++;
    }
    return n;
}
int main(){
    printf("%d\n", bitcount(0xFF)); // should be 8
}
