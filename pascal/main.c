#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a[20][20],i,j,n,k,p1,p2,p;
  printf("enter the range");
  scanf("%d",&n);

  for(i=0;i<=n;i++)
  {
       for(j=0;j<=i;j++)
      {
          if (j==0||j==i)
          {
            p=1;
          }
          else if(j==1||j==i-1)
          {
              p=i;
          }
          else
          {
             p1=i;p2=j;
               for(k=1;k<j;k++)
             {
              p1=p1*(i-k);
              p2=p2*(j-k);
             }
          p=p1/p2;
          }
        a[i][j]=p;
      }
  }
  printf("n/r");
  for(i=0;i<=n;i++)
  {
      printf("\t%d",i);
  } printf("\n");
  for(i=0;i<=n;i++)
  {
      printf("%d",i);
      for(j=0;j<=i;j++)
      {
          printf("\t%d",a[i][j]);
      }
      printf("\n");
  }
  return 0;
}
