#include <stdio.h>
#include <stdlib.h>

struct bst
{
    int data;
    struct bst* left;
    struct bst* right;
};
typedef struct bst* node;
node root=NULL;

void prefix(node Node)
{
    if(Node!=NULL)
    {
       printf("%d  ",Node->data);
       prefix(Node->left);
       prefix(Node->right);
    }
}

void infix(node Node)
{
    if(Node!=NULL)
    {
      infix(Node->left);
      printf("%d  ",Node->data);
      infix(Node->right);
    }
}

void postfix(node Node)
{
    if(Node!=NULL)
    {
      postfix(Node->left);
      postfix(Node->right);
      printf("%d  ",Node->data);
    }
}

node create(node Node,int item)
{
   if(Node==NULL)
    {
        node temp;
        temp=(node)malloc(sizeof(node));
        temp->data=item;
        temp->left=NULL;
        temp->right=NULL;
        return temp;
    }
    if(item < Node->data)
        Node->left=create(Node->left,item);
    else if(item > Node->data)
        Node->right=create(Node->right,item);
    else
        printf("duplicate entry not possible");
    return Node;
}

void search(node Node,int item)
{
    if(Node==NULL)
    {
        printf("Element not found");
        return;
    }
    if(item==Node->data)
       {
         printf("Element found");
         return;
       }
     else if(item < Node->data)
         search(Node->left,item);
      else if(item > Node->data)
          search(Node->right,item);
}

int main()
{
    int i,ch,n,data;
    while(1)
    {
        printf("Enter the choice 1.insert 2.search 3.prefix 4.infix 5.postfix 6.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter the no of data:");
                   scanf("%d",&n);
                   for(i=0;i<n;i++)
                   {
                       printf("Enter the data to be inserted one at a time:");
                       scanf("%d",&data);
                       root=create(root,data);
                   }
                   break;
            case 2:printf("enter the data to be searched");
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
