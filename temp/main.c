#include<stdio.h>
#include<stdlib.h>

struct tree
{
    int info;
    struct tree* llink;
    struct tree* rlink;
};
typedef struct tree* node;
node root=NULL;

void prefix(node root)
{
    if(root!=NULL)
    {
        printf("%d",root->info);
        prefix(root->llink);
        prefix(root->rlink);
    }
}

void infix(node root)
{
    if(root!=NULL)
    {
        infix(root->llink);
        printf("%d",root->info);
        infix(root->rlink);
    }
}

void postfix(node root)
{
    if(root!=NULL)
    {
        postfix(root->llink);
        postfix(root->rlink);
        printf("%d",root->info);
    }
}

node create(node root,int data)
{
    if(root==NULL)
    {
        node temp;
        temp=(node)malloc(sizeof(node));
        temp->info=data;
        temp->llink=temp->rlink=NULL;
        return temp;
    }
    else if(root->info<data)
        root->llink=create(root->llink,data);
    else if(root->info>data)
        root->rlink=create(root->rlink,data);
    else
    printf("duplicate entry not allowed");
    return root;
}

void search(node root,int data)
{
    if(root==NULL)
    {
        printf("element not found");
        return;
    }
    if(root->info==data)
    {
        printf("element found");
        return;
    }
    else if(root->info<data)
        search(root->llink,data);
    else if(root->info>data)
        search(root->rlink,data);
}

int main()
{
    int ch,data,n,i;
    while(1)
    {
        printf("Enter ur choice 1.create 2.s 3.pre 4.in 5.post 6.x");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:root=NULL;
                   printf("enter the no of entry");
                   scanf("%d",&n);
                   for(i=0;i<n;i++)
                   {
                       printf("enter");
                      scanf("%d",&data);
                      root=create(root,data);
                      printf("entered");
                   }
                   break;
            case 2:printf("enter the element to search");
                   scanf("%d",&data);
                   search(root,data);
                   break;
            case 3:printf("the prefix is");
                   prefix(root);
                   break;
            case 4:printf("the infix is");
                   infix(root);
                   break;
            case 5:printf("the postfix is");
                   postfix(root);
                   break;
            case 6:exit(0);
    }
  }
    return 0;
}
