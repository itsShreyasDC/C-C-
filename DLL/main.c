#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    char name[20];
    struct node* llink;
    struct node* rlink;
};
typedef struct node* Node;
Node first=NULL;
int count=0;

Node create()
{
    Node ecreate;
    ecreate=(Node)malloc(sizeof(struct node));
    if(ecreate==NULL)
    {
      printf("memory shortage");
    }
    printf("enter the name\n");
    scanf("%s",&ecreate->name);
    ecreate->llink=NULL;
    ecreate->rlink=NULL;
    count++;
    return ecreate;
}

void finsert()
{
    Node temp;
    temp=create();
    if(first==NULL)
    {
        first=temp;
        return;
    }
    temp->rlink=first;
    first->llink=temp;
    first=temp;
}

void rinsert()
{
    Node temp,cur;
    temp=create();
    if(first==NULL)
    {
        first=temp;
        return;
    }
    cur=first;
    while(cur->rlink!=NULL)
        cur=cur->rlink;
    cur->rlink=temp;
    temp->llink=cur;
}

void fdelete()
{
    Node temp;
    if(first==NULL)
    {
        printf("empty\n");
    }
    else if(first->rlink==NULL)
    {
        puts(first->name);
        free(first);
        first=NULL;
        count--;
    }
   else
   {
       temp=first;
    first=temp->rlink;
    first->llink=NULL;
    printf("deleted");
    puts(temp->name);
    free(temp);
    count--;
   }
}

void rdelete()
{
    Node temp,cur;
    if(first==NULL)
    {
        printf("empty\n");
    }
   else if(first->rlink==NULL)
    {
        puts(first->name);
        free(first);
        first=NULL;
        count--;
    }
   else
   {
       cur=first;
    while(cur->rlink!=NULL)
    {
        cur=cur->rlink;
    }
    temp=cur;
    temp=temp->llink;
    temp->rlink=NULL;
    printf("deleted");
    puts(cur->name);
    free(cur);
    count--;
   }
}

void display()
{
    Node temp;
    temp=first;
    while(temp!=NULL)
    {
        puts(temp->name);
        temp=temp->rlink;
    }
    printf("\ncount:%d",count);
}

int main()
{  int ch;
  while(1)
  {
        printf("\nEnter a choice 1.front insert 2.rare insert\n3.front delete 4.rare delete \n5.display 6.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:finsert();
            break;
            case 2:rinsert();
            break;
            case 3:fdelete();
            break;
            case 4:rdelete();
            break;
            case 5:display();
            break;
            case 6:exit(0);
        }
  }
    return 0;
}
