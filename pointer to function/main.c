#include <stdio.h>
#include <stdlib.h>
int area(int,int);

int area(int x,int y)
{
    printf("Area =%d",x*y);
    return 0;
}

int main()
{
    int a,b;
    int (*ptr)(int,int)=&area;
    printf("Enter len & bredth");
    scanf("%d%d",&a,&b);
    ptr(a,b);
    return 0;
}
