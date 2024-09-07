#include <stdio.h>
#include <stdlib.h>
#include <process.h>
int n,i,j,temp,a[10];
//void bubble(int[]);
int main()
{
    printf("enter no of elements");
    scanf("%d",&n);
    printf("enter elements into array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   bubble(a);
    return 0;
}

void bubble(int a[]){
for(j=0;j<n-1;j++){
    for(i=0;i<n-1-j;i++){
        if(a[i]>a[i+1]){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
}
for(i=0;i<n;i++)
    printf("\t%d",a[i]);
}

