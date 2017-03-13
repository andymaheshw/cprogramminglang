#include <stdio.h>

main()
{
    int c, nl, blank, tab;
    nl = 0;
    blank = 0;
    tab = 0;
    while((c= getchar()) != EOF)
    {
        if(c== '\n')
            ++nl;
        else if(c == ' ')
            ++blank;
        else if(c == '\t')
            ++tab;
    }
    printf("%d TAB, %d NEWLINE, %d BLANK", tab, nl, blank);
}
