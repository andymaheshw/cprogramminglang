#include <stdio.h>
#define N 5
#define MAXLINE 1000
/* folds lines over length of N */

int getline1(char s[]);

int main()
{
    int len;
    char line[MAXLINE];
    while((len = getline1(line)) > 0)
    {
        if (len < N)
            printf(" %s", line);
    }
}

int getline1(char s[])
{
    int i, last_val, c;
    last_val = 0;
    for(int i = 0; (c=getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
        if (i > last_val && i % N == 0)
        {
            printf(" %.*s\n",i, s + last_val);
            last_val = i;
        }
    }
    if(c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
