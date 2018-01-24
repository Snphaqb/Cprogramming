#include <stdio.h>

// ex 1-4 Modify the temperature conversion program to print the celcius to fahrenheit table.
/* print Fahrenheit-Celcius table */

int main(){
    float fahr, celcius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Celcius   Fahrenheit\n");
    while(celcius <= upper) {
        fahr = (9.0/5.0)*celcius + 32;
        printf("  %3.0f\t %6.1f\n", celcius, fahr);
        celcius += step;
    }
}
