#include <stdio.h>
#include <stdlib.h>
#define size 3

int cq[size],elem,f=-1,r=-1;

int main()
{ int ch;
    while(1)
    {
        printf("\nEnter choice 1.to insert 2.to delete 3.to display 4.to exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:cqinsert();
            break;
            case 2:cqdelete();
            break;
            case 3:display();
            break;
            case 4:exit(0);
        }
    }
    return 0;
}

void cqinsert()
{
    if(f==(r+1)%size)
        printf("cqueue overflow\n");
    else
    {   if(f==-1)
          f=0;
        printf("enter element:");
        scanf("%d",&elem);
        r=(r+1)%size;
        cq[r]=elem;
    }
}

void cqdelete()
{
    if(f==-1)
        printf("cqueue underflow\n");
    else
    {   elem=cq[f];
        printf("popped %d",elem);
        if(f==r)
        {
            f=-1;
            r=-1;
        }
        else
            f=(f+1)%size;
    }
}

void display()
{ int i;
    if(f==(r+1)%size)
        printf("cqueue full\n");
    if(f==-1)
        printf("cqueue empty\n");
    for(i=f;i!=r;i=(i+1)%size)
        printf("%d\t",cq[i]);
        printf("%d",cq[r]);
}
