#include <stdio.h>

int lower(int c);

int main() {
 int c = 'C';
 printf(" %c ", lower(c));
}

int lower(int c)
{
    return (c >= 'A' && c <= 'Z') ? c-'A'+'a' : c;
}
