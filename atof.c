#include <ctype.h>
#include <stdio.h>
#define MAXLINE = 100

/* atof: convert string s to double */
double atof(char s[])
{
    double val, power;
    int i, sign;
    int epower;
    bool edivide;
    for(i = 0; isspace(s[i]); i++)
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == 'x' || s[i] == '-')
        i++;
    for (val = 0.0; isdigit(s[i]); i++)
        val = 10.0* val + (s[i] - '0');
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++)
    {
        val = 10.0* val + (s[i] - '0');
        power *= 10.0;
    }
    val = sign * val/power;
    if (s[i] == 'e') {
        i++;
    }
    if (!isdigit(s[i]))
    {
        edivide = true;
        i++;
    }
    else
    {
        edivide = false;
        i++;
    }
    for (epower = 1.0; isdigit(s[i]); i++)
    {
        epower *= 10.0;
    }
    if (edivide)
    {
        return val/epower;
    }
    else
    {
        return val*epower;
    }
}

int getline(char s[], int lim)
{
    int c, i;

    i = 0;

    while(--lim > 0 && (c = getchar()) != EOF && c != '\n')
    {
        s[i++] = c;
        if (c == '\n')
        {
            s[i++] = c;
        }
        s[i] = '\0';
        return i;
    }
}

int main()
{
    double sum, atof(char[]);
    char line[MAXLINE];
    int getline(char line[], int max);

    sum = 0;
    while (getline(line, MAXLINE) > 0)
        printf("\t%g\n", sum += atof(line));
    return 0;
}

int atoi (char s[])
{
    double atof(char s[]);
    return (int) atof[s];
}
