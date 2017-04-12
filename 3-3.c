#include <stdio.h>
#define MAXLINE 1000

int expand(char s1[], char s2[]);
int get_line(char line[], int maxline);

int main(){

int s1_len;
int s2_len;
char s1[MAXLINE];
char s2[MAXLINE];

s1_len = get_line(s1, MAXLINE);
s2_len = get_line(s2, MAXLINE);

printf(" %c", 69);
//expand(s1, s2);
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
  bool synced = true;
  for(i = 0; i < strlen(s1); ++i)
  {
    if (s1[i] == '-')
    {
        for(j = 0; j < s1[i+1]-s2[i-1]; ++j)
        {

        }
    }
    else if (sycned) {
        s2_position = i;
    }
  }
}
