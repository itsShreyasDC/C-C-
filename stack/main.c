#include <stdio.h>
#include <stdlib.h>
#define size 3

int a[size],top=-1;

int main()
{ int ch;
    while(1)
    {
        printf("\nEnter choice 1.to insert 2.to delete 3.to display 4.to exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:exit(0);
        }
    }
    return 0;
}

void push()
{
    if(top==size-1)
        {
            printf("stack overflow\n");
            return;
        }
        printf("enter element:");
        scanf("%d",&a[++top]);
}

void pop()
{
    if(top==-1)
       {
         printf("stack underflow\n");
         return;
       }
    printf("popped %d",a[top--]);
}

void display()
{ int i;
    if(top==size-1)
        printf("stack full\n");
    if(top==-1)
        printf("stack empty\n");
    for(i=top;i>=0;i--)
        printf("%d \t",a[i]);
}

