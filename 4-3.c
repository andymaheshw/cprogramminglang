#include <stdio.h>
#include <stdlib.h> /* for atof */
#include <math.h>

#define MAXOP 100

#define NUMBER '0'
#define MAXVAL 100

int sp = 0;
double val[MAXVAL];
int getop(char []);
void push(double);
double pop(void);

int main()
{
    int type;
    double op2;
    char s[MAXOP];
    int tmp;

    while ((type = getop(s)) != EOF) {
        switch(type) {
            case NUMBER:
                tmp = atof(s);
                printf(" Value of tmp %i\n", tmp);
                push(atof(s));
                break;
            case '+':
                push(pop() + pop());
                break;
            case '*':
                push(pop() * pop());
                break;
            case '-':
                op2 = pop();
                push(pop() - op2);
                break;
            case '/':
                op2 = pop();
                if (op2 != 0.0)
                    push(pop() / op2);
                else
                    printf("error: zero divisior\n");
                    break;
            case '%':
                push(fmod(pop(),op2));
            case '\n':
                printf("Data%.8g\n", pop());
                break;
            default:
                printf("error: unknown command %s\n", s);
                break;
        }
    }
    return 0;
}

void push(double f)
{
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("error: stack full can't push %g\n", f);

}

double pop(void)
{
    if (sp > 0)
        return val[--sp];
    else {
        printf("error: stack empty\n");
        return 0.0;
    }
}

#include <ctype.h>

int getch(void);
void ungetch(int);

int getop(char s[])
{
    int i, c;

    while((s[0] = c = getch()) == ' ' || c == '\t')
        ;
    s[1] = '\0';
    if (!isdigit(c) && c != '.' && c != '-')
        return c;
    i = 0;
    if (c == '-')
    {
        int d;
        if(isdigit(d = getch()))
        {
            ungetch();
        }
        else {
            return c;
        }
    }
    if (isdigit(c) || c == '-')
        while (isdigit(s[++i] = c = getch()))
            ;
    if(c == '.')
        while (isdigit(s[++i] = c = getch()))
            ;
    s[i] = '\0';
    printf(" Value of s %s\n", s);
    if (c != EOF)
        ungetch(c);
    return NUMBER;
}


#define BUFSIZE 100

char buf[BUFSIZE]; /* buffer for ungetch */
int bufp = 0; /* next free position in buf */

int getch(void) /* get a (possibly pushed-back) character */
{
    int b;
    if (bufp > 0) {
       return buf[--bufp];
    }
    else {
        b = getchar();
        return b;
    }
}

void ungetch(int c) /* push character back on input */
{
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}
