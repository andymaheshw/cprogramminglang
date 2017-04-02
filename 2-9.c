#include <stdio.h>

int bitcount(unsigned x);

int main(){

printf(" %i", bitcount(60));
}

int bitcount(unsigned x)
{
    int b, c;
    unsigned int y = x;
    for (b = 0; x != 0; x >>= 1)
    {
        if (x & 01)
            b++;
    }
    c = 0;

    while (y != 0)
    {
        y &= y-1;
        ++c;
    }
    printf(" %i", c);
    return b;
}
