#include <stdio.h>
#include <conio.h>

int main()
{
  char ch,l,u;
  printf("enter a character=");
  scanf("%c",&ch);
l=(ch=='a'||ch=='e'||ch=='i');
u=(ch=='A'||ch=='E'||ch=='I');
if(l||u)printf ("the character is aei");
else printf("the character is not aei");
    getch();

}
