#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void read_p();
void display();
void evaluate();
int i,n,p[10][4];

int main()
{
    printf("Enter the no of terms\n");
    scanf("%d",&n);
    read_p();
    display();
    evaluate();
    return 0;
}

void read_p()
{
    for(i=0;i<n;i++)
    {
        printf("Enter the coefficient and powers of x y z for term %d\n",i+1);
        scanf("%d%d%d%d",&p[i][0],&p[i][1],&p[i][2],&p[i][3]);
    }
}

void display()
{
   printf("the polynomial is:\n");
   for(i=0;i<n;i++)
   {
       printf("(%d X^%d Y^%d Z^%d)",p[i][0],p[i][1],p[i][2],p[i][3]);
       if(i<n-1)
       printf(" + ");
   }
}

void evaluate()
{
    int sum=0,x,y,z;
    printf("\nEnter the value of X Y Z\n");
    scanf("%d%d%d",&x,&y,&z);
    for(i=0;i<n;i++)
    {
        sum=sum+(p[i][0]*pow(x,p[i][1])*pow(y,p[i][2])*pow(z,p[i][3]));
    }
    printf("The value of polynomial is %d",sum);
}
