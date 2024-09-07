#include <stdio.h>
#include <stdlib.h>
int a[200],n,i,j,b[200];
void scan();
void bubble();
void print();
void fi();

int main()
{  system("color a0");
   printf("Enter no of elements: ");
   scanf("%d",&n);
   printf("Enter elements into array:\n");
   scan();
   bubble();
   printf ("The final array is:\n");
   fi();
   print();
   return 0;
}

void scan(){
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}

void bubble(){
    int temp;
     for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;}
        }
     }
}

void print(){
   for(i=0;i<j;i++){
    printf("%d ",b[i]);}
}

 void fi(){
     j=0;
   for(i=0;i<n;i++){
    if(a[i]!=a[i+1]){
     b[j]=a[i];
     j++;}
   }
}
