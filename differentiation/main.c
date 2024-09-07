#include <stdio.h>
#include <stdlib.h>
int c[20],n,i,j;
void print();

void print(){
        for(i=n;i>=0;i--){
        if(c[i]!=0){
         if (j!=0)
           {printf("%d(X^%d)",c[i],j);
           printf(" + ");}
        else
            printf("%d",c[i]);
            }
           j--;
            }

}
int main()
{
    printf("Enter degree of an equation: ");
    scanf("%d",&n);
    for (i=n;i>=0;i--){
        printf("Enter the coefficient of X^%d: ",i);
        scanf("%d",&c[i]);
    }
   j=n;
   print();
   for (i=n;i>=0;i--){
    if(i!=0){
      if(c[i]!=0)
        c[i]=c[i]*i;
    }
    else
        c[i]=0;
   }
   printf("The differentiated equation is:\n");
   j=n-1;
   print();
    return 0;
}
