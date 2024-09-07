#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int num[3][2]={
    {5,4},
    {6,3},
    {1,9},
    };
   for (i=0;i<3;i++){
        for (j=0;j<1;j++){printf("|%d,",num[i][j]);};
         for (j=1;j<2;j++){printf("%d",num[i][j]);};
        printf("|\n");
}}


