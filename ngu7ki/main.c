#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
  int a,b,r;
  char c;
  printf("2num");
  scanf("%d%d",&a,&b);
  printf("enter");
  scanf("%c",&c);
  switch(c)
  {
      case'+':r=a+b;break;
      case'-':r=a-b;break;
      case'/':if(b==0){printf("invalid0");
      getch();
      exit(0);}
        else r=a/b;break;
         case'*':r=a*b;break;
         default:printf("in");

  } printf("\n%d",r);
  getch();
}
