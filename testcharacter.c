#include <stdio.h>
#define MAXLINE 5

double getAverage(int arr[], int size);

int main()
{
    int balance[MAXLINE];
    printf(" %d", balance[1]);
    double avg;
    int i;

    for(i = 0; i < MAXLINE; ++i)
        balance[i] = 0;

    avg = getAverage(balance, MAXLINE);

    printf("Average value is %f", avg);
}

double getAverage(int arr[], int size)
{
    int i;
    double avg;
    double sum = 0;

    for(i = 0; i < size; ++i)
    {
        printf(" %d\n", arr[i]);
        sum += arr[i];
    }
    avg = sum/size;
    return avg;
}

