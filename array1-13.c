#include <stdio.h>

main()
{
    int c, counter, i, j;
    c = counter = i = j = 0;
    int ndigit[10];
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;
    while((c = getchar()) != EOF)
    {
        if(c == ' ')
        {
            if (counter > 9)
                counter = 9;
            if (counter > 0)
            {
                ++ndigit[counter];
            }
            counter = 0;
        }
        else
        {
            ++counter;
            //printf(counter);
        }
    }
    if(counter > 0)
        if (counter >9)
            counter = 9;
        ++ndigit[counter];

    //printing
    for(i = 0; i < 10; i++)
    {
        printf("%d VALUE %d",i, ndigit[i]);
        for (j = 0; j < ndigit[i]; ++j)
            printf("*");
        printf("\n");
    }

}
