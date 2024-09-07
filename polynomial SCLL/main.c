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
node first,last;

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
        else if(last==NULL)
        {
            last=temp;
            first->link=last;
            last->link=first;
        }
        else
        {
            last->link=temp;
            temp->link=first;
            last=temp;
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
    do
    {
        printf("(%d X^%d Y^%d Z^%d)",temp->co,temp->px,temp->py,temp->pz);
        if(temp!=last)
            printf("+");
        temp=temp->link;
    }while(temp!=first);
}

void evaluate()
{
    int sum=0,x,y,z;
    node temp=first;
    printf("\nEnter the value of X Y Z\n");
    scanf("%d%d%d",&x,&y,&z);
    do
    {
        sum=sum+(temp->co * pow(x,temp->px) * pow(y,temp->py) * pow(z,temp->pz));
        temp=temp->link;
    }while(temp!=first);
    printf("the value of polynomial is %d\n",sum);
}

int main()
{
    int ch=1;
   while(ch==1)
   {
       first=NULL;
       last=NULL;
       printf("Evaluate the polynomial containing XYZ\n");
       insert();
       display();
       evaluate();

       printf("Enter 1.to evaluate polynomial 2.to exit\n");
       scanf("%d",&ch);
   }
    return 0;
}
