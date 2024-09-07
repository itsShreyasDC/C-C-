#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a[10]={10,20,30};
 int i;
 int *p;
 p=&a;
 for(i=3;i<5;i++)
 {
     scanf("%d",p+i);
 }
 for(i=0;i<5;i++)
 {
     printf("%d  ",*(p+i));
 }


    return 0;
}
