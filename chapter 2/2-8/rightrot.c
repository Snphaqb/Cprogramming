#include<stdio.h>
int rightrot(unsigned x, int n){
    if(n == 0)
        return x;
    if(x & 1) // rightmost bit is 1
        return rightrot(x >> 1 | ~(~0U >> 1),n-1); // ~(~0U >> 1) = 1000000...
    return rightrot(x>>1, n-1);
}

int main(){
    printf("%u\n", rightrot(1,1)); // should be 1(31 zeroes) in binary = 2147483648 in decimal;
}
