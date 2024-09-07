#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char postfix[20];

int F(char s)
{
    switch(s)
    {
           case '+':
           case '-':return 2;
           case '*':
           case '/':return 4;
           case '$':
           case '^':return 5;
           case '(':return 0;
           case '#':return -1;
               default:return 8;
    }
}

int G(char s)
{
    switch(s)
    {
           case '+':
           case '-':return 1;
           case '*':
           case '/':return 3;
           case '$':
           case '^':return 6;
           case '(':return 9;
           case ')':return 0;
               default:return 7;
    }
}

void infix_postfix(char infix[])
{
    char sym,s[20];
    int i,j,top=-1;
    top=top+1;
    s[top]='#';
    j=0;
     for(i=0;i<strlen(infix);i++)
     {
         sym=infix[i];
         while(F(s[top])>G(sym))
         {
             postfix[j++]=s[top--];
         }
         if(F(s[top])!=G(sym))
         {
             s[++top]=sym;
         }
         else
            top--;
     }
     while(s[top]!='#')
        postfix[j++]=s[top--];
   postfix[j]='\0';
}

int main()
{
    char infix[20];
   printf("enter the infix expression:");
   scanf("%s",&infix);
   infix_postfix(infix);
   printf("the postfix expression is: %s",postfix);
    return 0;
}




