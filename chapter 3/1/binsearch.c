#include<stdio.h>
#include<time.h>
int binsearchOriginal(int x, int v[], int n){
    int low, mid, high;
    low =0;
    high = n-1;
    while(low <= high){
        mid = (low + high) / 2;
        if(x < v[mid])
            high = mid -1;
        else if(x > v[mid]) 
            low = mid + 1;
        else
            return mid;
    }
    return -1;
 
}
int binsearch(int x, int v[], int n){
    int low, mid, high;
    low =0;
    high = n-1;
    mid = (high + low) / 2;
    while(low <= high && x != v[mid]){
        mid = (low + high) / 2;
        if(x < v[mid])
            high = mid -1;
        else 
            low = mid + 1;
    }
    return v[mid] == x ? mid : -1;
}

int main(){
    // first benchmark is always off (i don't know why)
    int v[] = {1,2,3,4,5,6};
    clock_t begin, end;
    begin = clock();
    printf("%d",binsearch(1,v,6));
    printf("%d",binsearch(2,v,6));
    printf("%d",binsearch(3,v,6));
    printf("%d",binsearch(4,v,6));
    printf("%d",binsearch(5,v,6));
    printf("%d",binsearch(6,v,6));
    end = clock();
    putchar('\n');
    printf("one test in loop took: %.10f seconds\n", (double)(end-begin) / CLOCKS_PER_SEC);   begin = clock();
    printf("%d",binsearch(1,v,6));
    printf("%d",binsearch(2,v,6));
    printf("%d",binsearch(3,v,6));
    printf("%d",binsearch(4,v,6));
    printf("%d",binsearch(5,v,6));
    printf("%d",binsearch(6,v,6));
    end = clock();
    putchar('\n');
    printf("one test in loop took: %.10f seconds\n", (double)(end-begin) / CLOCKS_PER_SEC);
    begin = clock();
    printf("%d",binsearchOriginal(1,v,6));
    printf("%d",binsearchOriginal(2,v,6));
    printf("%d",binsearchOriginal(3,v,6));
    printf("%d",binsearchOriginal(4,v,6));
    printf("%d",binsearchOriginal(5,v,6));
    printf("%d",binsearchOriginal(6,v,6));
    end = clock();
    putchar('\n');
    printf("two tests in loop took: %.10f seconds\n", (double)(end-begin) / CLOCKS_PER_SEC);
}
