#include <stdio.h>
#include <conio.h>

void main()
{
   int i=0,j=0,p=30,m=0,n;
   while(i<p){
    i++;j=0;m++;n=p-m;
    while(j<=n/2){j++;
        printf("*");}
   while(j>n/2&&j<=n+n/2){j++;
   printf(" ");}
    while(j>n+n/2&&j<2*n){j++;
        printf("*");
    }
      printf("\n"); }

}
