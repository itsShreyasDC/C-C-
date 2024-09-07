#include <stdio.h>
#include <stdlib.h>

int main()
{ char a[10]={"abcd"},b[10];
  int i;
  char *p;
  char *q;
  p=&a;q=&b;
  while(*p!='\0')
  {
      *q=*p;
      q++;
      p++;
  } *q='\0';
  printf("copied string =%s\n",b);
  q=&b;
  for(i=0;*q!='\0';i++)
  {
      printf("%c",*q);
      q++;
  }
  printf("\n%d",i);
    return 0;
}
