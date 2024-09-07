#include <stdio.h>
#include <stdlib.h>


int main()
{ int i,j,n;
printf("no of rows");
scanf("%d",&n);
for(i=0;i<n;i++){
    for(j=n;j>i;j--){ printf("%d",j);} // for 4321 432 43 4
    for(j=1;j<=n-i;j++){ printf("%d",j);} // for 1234 123 12 1
    for(j=1;j<=i;j++){ printf(" %d",j);}  // for 1 12 123 1234

    printf("\n");
}
    return 0;
}
