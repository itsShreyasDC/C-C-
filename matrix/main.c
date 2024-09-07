#include <stdio.h>
#include <stdlib.h>
int m,n,i,j,k,a[20][20],b[20][20],c[20][20];
void matrix(int[20][20]);

 void matrix(int x[20][20]){
     for(i=0;i<m;i++){ printf("    |\t");
        for(j=0;j<n;j++){
            printf("%d\t",x[i][j]);
        }printf("|\n");
     }
 }
 void add(){
  for(i=0;i<m;i++)
  {for(j=0;j<n;j++){
        c[i][j]=a[i][j]+b[i][j];
      }
  }
 }

int main()
{
     printf("Enter the no of rows and columns\n");
     scanf("%d%d",&m,&n);
     printf("Enter the elements of matrixin the format of\n");
     printf("| 1    2    3    . . .  n |\n");
     printf("| n+1  n+2  n+3  . . . 2n |\n");
     printf("| 2n+1 2n+2 2n+3 . . . 3n |\n");
     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
             k=j+(n*i)+1;
            printf("enter the %d element of matrix A and B respectively\n",k);
            scanf("%d%d",&a[i][j],&b[i][j]);
        }}
     printf("the matrix A is\n");
        matrix(a);
      printf("the matrix B is\n");
        matrix(b);
      printf("the matrix C=A+B is\n");
      add();
      matrix(c);

    return 0;
}
