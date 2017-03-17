#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, 300 */
int power(int fahr, int step, int upper);

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    fahr = 0;
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    return power(fahr, step, upper);
}

int power(int fahr, int step, int upper)
{

    double celsius;
    celsius = 0;
        while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%d %3.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}

