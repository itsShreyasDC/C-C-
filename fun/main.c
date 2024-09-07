#include <stdio.h>
#include <stdlib.h>
 int num1;
 int num2;

 int max(){int result;
     if (num1>num2){result=num1;}
    else if (num2>num1){result=num2;}
    return result;
 }
int main()
{
    printf("enter a number1=");
    scanf("%d",&num1);
     printf("enter a number2=");
    scanf("%d",&num2);

    printf("the greater num is=%d",max());
    return 0;
}
