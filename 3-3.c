#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int expand(char s1[], char s2[]);
int get_line(char line[], int maxline);

int main(){

int s1_len;
int s2_len;
char s1[MAXLINE];
char s2[MAXLINE];

s1_len = get_line(s1, MAXLINE);


expand(s1, s2);
printf(" %s", s2);
}

int get_line(char line[], int maxline){
    int c, i;

    for(i=0; i < maxline-1 && (c=getchar()) != EOF && c!='\n'; ++i)
        line[i] = c;
    line[i] = '\0';
    return i;

}


int expand(char s1[], char s2[]) {
  int i = 0;
  int j = 0;
  int s2_position = 0;
  for(i = 0; i < strlen(s1); ++i)
  {
    if (s1[i] == '-')
    {
        for(j = 0; j < s1[i+1]-s2[i-1]+1; ++j)
        {
            s2[s2_position] = s1[i-1]+j;
            s2_position++;
            //printf("s2 VALUE %s", s2);
        }
    }
  }
  return 0;
}
