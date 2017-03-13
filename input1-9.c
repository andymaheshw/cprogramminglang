#include <stdio.h>

int main(void)
{
    int c, flip;
    c = 0;
    flip = 0;

    while((c=getchar()) != EOF)
    {
        if(c == ' ')
        {
            if(flip == 0)
            {
                flip = 1;
                putchar(c);
            }
        }
        else
        {
            putchar(c);
            flip = 0;
        }

    }
}
