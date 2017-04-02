#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main(){

    unsigned int x = 60; //0011 1100 positions: 7654 3210
    unsigned int y = 13; /* 13 = 0000 1101 */
    //final answer should be 0011 1101
    int p = 4;
    int n = 3;
    int mid = ((y >> (p + 1-n)) & ~( ~ 0 << n));
    //printf(" %i", mid << (2)); // 0000 1100
                               // 0011 1100
                               // 0010 1100 <- should be final answer. basically want to drop 0010
    // 15 = 0000 1111  first half & 0111 = 7 + positive half.
    //printf("%u\n", setbits(60, 4, 3, 13));
    printf("%u\n", rightrot(x, n));
    return 0;
}


//notes from jeremy yan repo, doesn't work though.. gives 52..expected 44.
unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    // xxxxx00000xxxxx
    unsigned a = x & ~(~(~0U << n) << (p + 1 - n));

    // 00000yyyyy00000
    unsigned b = (y & ~(~0U << n)) << (p + 1 - n);

    // xxxxxyyyyyxxxxx
    return a | b;
}


// This should probably do something about the values at the top of the range.
unsigned rightrot( x, n)
{
    return a >> n;
}
