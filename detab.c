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
    int c, i, j;

    for (i = 0; (c=getchar()) != EOF && c!= '\n'; ++i)
    {
        if (c == '\t')
        {
            for(j = 0; j < N; ++j)
                s[i] = ' ';
                ++i;
        }
        else {
        s[i] = c;
        }
    }
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
