#include <stdio.h>
#include <stdlib.h>
#define size 3

int q[size],elem,f=-1,r=-1;

int main()
{ int ch;
    while(1)
    {
        printf("\nEnter choice 1.to insert 2.to delete 3.to display 4.to exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:qinsert();
            break;
            case 2:qdelete();
            break;
            case 3:display();
            break;
            case 4:exit(0);
        }
    }
    return 0;
}

void qinsert()
{
    if(r==size-1)
        printf("queue overflow\n");
    else
    {   if(f==-1)
          f=0;
        printf("enter element:");
        scanf("%d",&elem);
        r=r+1;
        q[r]=elem;
    }
}

void qdelete()
{
    if(f==-1)
        printf("queue underflow\n");
    else
    {   elem=q[f];
        printf("popped %d",elem);
        if(f==r)
        {
            f=-1;
            r=-1;
        }
        else
            f=f+1;
    }
}

void display()
{ int i;
    if(f==0&&r==size-1)
        printf("queue full\n");
    if(f==-1)
        printf("queue empty\n");
    for(i=f;i<=r;i++)
        printf("%d \t",q[i]);
}
