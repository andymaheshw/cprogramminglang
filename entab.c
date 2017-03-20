#include <stdio.h>
#define N 4
#define MAXLINE 1000

int get_line(char s[]);


int main()
{
    int len;
    char line[MAXLINE];
 while((len = get_line(line)) > 0)
 {
    printf(" %s", line);
 }
}

int get_line(char s[])
{
    int c, i, count_space, k, j;
    j = 0;

    for (i = 0; (c=getchar()) != EOF && c!= '\n'; ++i)
    {
        if (c == ' ')
        {
            ++count_space;
            if(count_space == N)
            {
                printf(" \nENTERED");
                ++k;
                s[k] = 'Z';
                count_space = 0;
            }
        }
        else {
            if (k == i- 1)
            {
                k = i;
                s[k] = c;
            }
            else if (i == 0)
            {
                s[0] = c;
            }
            else {
                while(j < count_space)
                  {
                    ++k;
                    s[k] = ' ';
                    ++j;
                 }
                 s[++k] = c;
            }
            count_space = 0;
        }
    }
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    printf("READY TO EN %d", k);
    return i;
}
