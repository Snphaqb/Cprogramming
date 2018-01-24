#include <stdio.h>

// ex 1-5 Modify the temperature program to print from 300 to 0.
/* print Fahrenheit-Celcius table */

int main(){
    float fahr, celcius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = upper;
    printf("Fahrenheit Celcius\n");
    while(fahr >= lower) {
        celcius = (5.0/9.0) * (fahr-32.0);
        printf("  %3.0f\t %6.1f\n", fahr, celcius);
        fahr -= step;
    }
}
