#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 3

struct Node
{
    char name[20];
    struct Node* link;
};
typedef struct Node* node;
node f=NULL;
node r=NULL;
int count=0;

void insert()
{
    node temp;
    if(count==size)
    {
        printf("queue overflow\n");
        return;
    }
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->link=NULL;
    printf("enter name\n");
    scanf("%s",&temp->name);
    if(r==NULL)
    {
        f=r=temp;
    }
    else
    {
        r->link=temp;
        r=temp;
    }
    count++;
}

void delet()
{
    node temp;
    if(f==NULL)
    {
        printf("queue underflow\n");
        return;
    }
    temp=f;
    printf("deleted\n");
    puts(temp->name);
    if(f==r)
    {
        f=r=NULL;
    }
    else
    {
        f=f->link;
        free(temp);
    }
    count--;
}

void display()
{
    node temp;
    if(f==NULL)
        printf("empty\n");
    else
    {
          if(count==size)
              printf("full\n");
            temp=f;
            while(temp!=NULL)
            {
                puts(temp->name);
                temp=temp->link;
            }
            printf("count = %d",count);
    }
}

int main()
{
    int ch;
    while(1)
    {
         printf("\n Enter a choice 1.insert 2.delete 3.display \n");
         scanf("%d",&ch);
         switch(ch)
         {
             case 1:insert();
                    break;
             case 2:delet();
                    break;
             case 3:display();
                    break;
             case 4:exit(0);
         }
    }
    return 0;
}
