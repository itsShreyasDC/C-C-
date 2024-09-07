#include <stdio.h>
#include <conio.h>

void main()
{
    int i,j,n,m;
    printf("no of rows=");
    scanf ("%d",&m);
    n=m-1;


    for (i=0;i<=n;i++){
 for(j=0;j<i;j++){printf("   ");}
 for (j=i;j<=n+n-i;j++){printf(" * ");}


        printf("\n");


    }

getch();

}
