#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

void main()
{
  int i;
  float n,pro;
  pro=1;
  printf("enter a num=");
  scanf("%f",&n);

    for(i=1;i<=n;i++){
        pro=pro*i;
        printf("\nThe factorial of %d is %f",i,pro);}
   getch();
}
