#include <stdio.h>
#include <stdlib.h>
struct student
{
    int age;
    char Grade;
}s,*p;
int main()
{
    p=&s;
   printf("enter the elements ");
   scanf("%d\n",&p->age);
   scanf("%c",&p->Grade);

    printf("%d,%c",p->age,p->Grade);
    return 0;
}
