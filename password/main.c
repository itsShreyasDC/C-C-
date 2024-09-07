#include <stdio.h>
#include <stdlib.h>

int main()
{
    int password= 1963;
    int entryno;
    int trail= 0;
    int traillimit= 3;
    int trailerror=0 ;
    while(entryno != password & trailerror==0)
        {
            if (trail < traillimit)
        {printf("enter password=\n");
        scanf("%d",&entryno);
        trail++;
        }
        else{
                trailerror =1;
                }
    }
if(trailerror== 1){printf("retry later\n");}
   else printf("password hacked");

}
