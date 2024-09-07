#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <process.h>
struct emp{
   int id;
   char na[20];
   char a[100];
   int age;
}e[20];

int main()
{ int n,i;char j[20];
   printf("Enter no of employees\n");
   scanf("%d",&n);
   printf("\n enter details of employees");
   for(i=0;i<n;i++){
    printf("\n   enter employee id:");
    scanf("%d",&e[i].id);
    gets(j);
    printf("\n   enter employee name:");
    gets(e[i].na);
    printf("\n   enter employee address:");
    gets(e[i].a);
    printf("\n   enter employee age:");
    scanf("%d",&e[i].age);
    printf("\n");
    }
   printf("\nthe employee details are\n");
   for(i=0;i<n;i++){
    printf(" employee:%d",i+1);
    printf("\n   id:%d",e[i].id);
    puts(j);
    printf("\n   name:");
    puts(e[i].na);
    printf("\n   address:");
    puts(e[i].a);
    printf("\n   age:%d\n",e[i].age);
    printf("\n");
   }


    return 0;
}
