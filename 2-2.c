#include <stdio.h>


int main()
{
    int i, lim;
    lim = 100;
    for(i = 0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
        s[i] = c;

    // equivalent to:
    for(i = 0; i < lim-1; ++i)
    {
        if (c=getchar()) == '\n':
            break;
        else if c != EOF:
            break;
        s[i] = c;
    }

}
