#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 3

struct node
{
    char name[20];
    struct node* link;
};
typedef struct node* Node;
Node top=NULL;
int count=0;

void push()
{
    Node temp;
    if(count==size)
    {
        printf("stack overflow");
    }
    else
    {
        temp=(struct node*)malloc(sizeof(struct node));
        printf("enter name\n");
        scanf("%s",&temp->name);
        temp->link=NULL;
        if(top!=NULL)
        {
           temp->link=top;
        }
       top=temp;
       count++;
    }
}

void pop()
{
    Node temp;
    if(top==NULL)
    {
        printf("Stack underflow");
    }
    else
    {
        temp=top;
        printf("deleted");
        puts(temp->name);
        top=temp->link;
        free(temp);
        count--;
    }
}

void display()
{ Node temp;
    if(top==NULL)
        printf("Empty");
    else
    {
        if(count==size)
            printf("Full/n");
        temp=top;
        while(temp!=NULL)
          {
            puts(temp->name);
            temp=temp->link;
          }
        printf("count=%d",count);
    }
}
int main()
{ int ch;
   while(1){
    printf("\nEnter a choice 1.insert 2.delete 3.display 4.exit\n");
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
