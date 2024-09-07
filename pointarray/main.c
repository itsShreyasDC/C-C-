#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{ float x[20],sum,mean,v,d,s,q;
    int n,i;
    float *t;
    t=x;
    printf("Enter no of elements");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
        scanf("%f",(t+i));
    sum=0;
    for(i=0;i<n;i++)
        sum=sum+*(t+i);
    mean=sum/n;
    printf("sum=%f mean=%f\n",sum,mean);
    sum=0;
    for(i=0;i<n;i++)
     {   s=*(t+i);
         q=s-mean;
    //printf("\n %f  %f",s,mean);
    //  printf("\n  %f",q);
      sum=sum+pow(q,2);
     // printf("\n%f",sum);
      }
    v=sum/n;
    d=sqrt(v);
    printf("variance=%f deviation=%f",v,d);
    return 0;
}
