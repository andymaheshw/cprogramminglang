#include <stdio.h>
#define MAXLINE 1000
int getline1(char s[], int lim);
/* GET LINE IS BROKEN, SO CHANGED TO GETLINE1 */
void copy(char to[], char from[]);

int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    int k;
    k = 5;
    max = 0;
    while ((len = getline1(line, MAXLINE)) > 0)
        if (len > 8)
            printf("%s", line);
    return 0;
}

int getline1(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim-1 && (c=getchar()) != EOF && c!= '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

