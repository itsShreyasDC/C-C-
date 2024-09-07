#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char s1[30],s2[30];
int n,i,j,m;

int main()
{
   printf("enter string1\n");
    gets(s1);
   printf("enter string2\n");
    gets(s2);
    n=len();
    concat();
    m=len();
    printf("%d\n",m);
    puts(s1);
    return 0;
}
int len()
{//n=strlen(s1);
    i=0;
    while(s1[i]!='\0')
        i++;
  //  for(j=0;s1[j]!='\0';j++){}
    return(i);
    }
void concat()
{
    for(j=0;s2[j]!='\0';j++)
    {
        s1[n+j]=s2[j];
    }s1[n+j]='\0';
}
