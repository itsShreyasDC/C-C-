#include <stdio.h>
#include <stdlib.h>

int main()
{
   int password=1969;
   int entryno;
   int trailno=0;
   while(entryno!= password && trailno<=2){
    printf("Enter your password=");
    scanf("%d",&entryno);
    trailno++;
   }
   if( entryno == password){printf("password hacked");}
   if (trailno >= 2){printf("retry later");}



    return 0;
}
