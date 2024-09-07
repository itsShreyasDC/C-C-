#include <stdio.h>
#include <conio.h>

void main()
{
    int i,j,n,m;
    printf("no of rows=");
    scanf ("%d",&m);
    n=m-1;


    for (i=0;i<=n;i++){
 for(j=0;j<n-i;j++){printf("   ");}
 for (j=n-i;j<=n+i;j++){printf(" * ");}


        printf("\n");


    }

getch();

}
