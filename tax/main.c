#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,y,i,a;
    a=0;
    printf("enter the salary=");
    scanf("%d",&m);
    y=m*12;
    printf("yearly income=%d",y);
     //150000=0%
    if(y>=150001&&y<=300000){
      a=(y-150000)*0.1;
    }
    if(y>=300001&&y<=500000){
       a=((y-300000)*0.2)+15000;
    }
    if(y>=500001){
        a=((y-500000)*0.3)+65000;
    }
    printf("\nthe tax is equal to=%d",a);
}
