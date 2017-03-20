#include <stdio.h>
#define MAXLINE 5
int getline(int s[], int lim);
/*
void copy(char to[], char from[]);
*/
int main()
{
    int len;
    int max;
    int line[MAXLINE];
    int longest[MAXLINE];

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0)
        if (len > max)
        {
            max = len;
            //copy(longest, line);
        }
        if (max > 0)
            printf("%s", longest);
        return 0;
}

int getline(int s[], int lim)
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
/*
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
*/
