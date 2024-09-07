#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Node
{
    int co;
    int px;
    int py;
    int pz;
    struct node* link;
};
typedef struct Node* node;
node first;

void insert()
{
    int ch=1;
    while(ch==1)
    {
        node temp,cur;
        temp=(node)malloc(sizeof(node));
        printf("\nEnter the coefficent of the term\n");
        scanf("%d",&temp->co);
        printf("Enter the power of x y z\n");
        scanf("%d%d%d",&temp->px,&temp->py,&temp->pz);
        temp->link=NULL;

        if(first==NULL)
        {
            first=temp;
        }
        else
        {
            cur=first;
            while(cur->link!=NULL)
                cur=cur->link;
            cur->link=temp;
        }
        printf("enter 1 to continue insertion or press other key to break: ");
        scanf("%d",&ch);
    }
}

void display()
{
    node temp;
    temp=first;
    printf("the polynomial is:\n");
    while(temp!=NULL)
    {
        printf("(%d X^%d Y^%d Z^%d)",temp->co,temp->px,temp->py,temp->pz);
        if(temp->link!=NULL)
            printf("+");
        temp=temp->link;
    }
}

void evaluate()
{
    int sum=0,x,y,z;
    node temp=first;
    printf("\nEnter the value of X Y Z\n");
    scanf("%d%d%d",&x,&y,&z);
    while(temp!=NULL)
    {
        sum=sum+(temp->co * pow(x,temp->px) * pow(y,temp->py) * pow(z,temp->pz));
        temp=temp->link;
    }
    printf("the value of polynomial is %d\n",sum);
}

int main()
{
    int ch=1;
   while(ch==1)
   {
       first=NULL;
       printf("Evaluate the polynomial containing XYZ\n");
       insert();
       display();
       evaluate();

       printf("Enter 1.to evaluate polynomial 2.to exit\n");
       scanf("%d",&ch);
   }
    return 0;
}
