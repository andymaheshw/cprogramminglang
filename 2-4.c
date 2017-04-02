#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);

int squeeze(char line1[], char line2[], int line_length1, int line_length2);

int main() {

    int line_length1;
    int line_length2;
    int max;
    char line1[MAXLINE];
    char line2[MAXLINE];

    line_length1 = get_line(line1, MAXLINE);

    line_length2 = get_line(line2, MAXLINE);

    squeeze(line1, line2, line_length1, line_length2);
    return 0;

}

int get_line(char line[], int maxline){
    int c, i;

    for(i=0; i < maxline-1 && (c=getchar()) != EOF && c!='\n'; ++i)
        line[i] = c;
    line[i] = '\0';
    return i;
}

int squeeze(char line1[], char line2[], int line_length1, int line_length2)
{
    int i, j, k;
    //printf("STRING1: %s, STRING2: %s", line1, line2);
    for (i = 0; i < line_length2; ++i)
    {
        for (j = 0; j < line_length1; ++j)
        {
            if (line2[i] == line1[j])
            {
                for(k=j; k < line_length1; ++k)
                {
                    int l;
                    l = k+1;
                    line1[k] = line1[l];
                    --j;
                }
            }
        }
    }
    printf(" CLEAN UP: %s", line1);
    return 0;
}
