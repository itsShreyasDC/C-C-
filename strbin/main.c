#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{ char emp[20][20],key[20];
  int n,mid,low,high,v,i,j;
  printf("enter no of employee");
  scanf("%d",&n);
  printf("enter employees name in ascending order");
  for(i=0;i<n;i++){
    scanf("%s",emp[i]);
  }
  printf("enter key to be searched");
  scanf("%s",key);
  high=n-1;low=0;
  while(low<=high){
    mid=(low+high)/2;
    v=strcmp(key,emp[mid]);
    if(v==0){
        printf("the element is found in the position %d",mid+1);
        j++;
        getch();
        exit(0);
    }
    else if(v>0)
        low=mid+1;
    else
        high=mid-1;
  }
  if(j==0)
    printf("element not found");
    return 0;
}
