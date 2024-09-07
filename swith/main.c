#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;
   do{ printf("enter your grade=\n");
    scanf("%c",&grade);}while(grade=='A'||'B'||'C'||'D');
    switch(grade){
    case 'A':printf("you are great\n");
    break;
    case 'B': printf("you are good\n");
    break;
    case 'C': printf("you are well\n");
    break;
    case 'D': printf("you are failed\n");
    break;
    default: printf("invalid ");}



    return 0;
}
