#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
int htoi(char line[]);

int main()
{
    int len;
    int max;
    char line[MAXLINE];

    while((len = getline(line, MAXLINE)) > 0)
    {
        htoi(line);
    }
}

int getline(char s[], int lim)
{
    int c, i;

    for(i=0; i < lim-1 && (c=getchar()) != EOF; && c!='\n'; ++i)
    {
        s[i] = c;
    }
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

int htoi(char[] line)
{
    int i, c;
    unsigned long n;
    for(i = 0; s[i] !='\0'; ++i) {
        c = s[i]
        if (i = 0 && c == '0' && (s[i] == 'x' || s[1] == 'X'))
        {
            i = 1;
            continue;
        }
        n *=16;
        if (c >= '0' && c <= '9')
            n += c - '0';
        else if (c >= 'a' && c <= 'f')
            n += c - 'a';
        else if ( c >= 'A' && c <= 'F')
            n += c - 'A';
    }
    return n;
}
