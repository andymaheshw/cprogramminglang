#include <stdio.h>

int main() {
int c, i, j;
int ndigits[26];

c = i = j = 0;
for (i = 0; i < 26; i++)
    ndigits[i] = 0;

while((c = getchar()) != EOF)
{
    int x = toupper(c) -  65;
    printf(" %d, %d", c, x);
    if (x < 26)
        ++ndigits[x];
        printf("VALUES %d", ndigits[x]);
}

for(i = 0; i < 26; i++)
{
    printf("%d VALUE %d",i, ndigits[i]);
    for (j = 0; j < ndigits[i]; ++j)
        printf("*");
    printf("\n");
}
return 0;
}
