#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <process.h>

int top=-1;
float s[20];

void push(float x)
{
    top=top+1;
    s[top]=x;
}

float pop()
{
    return s[top--];
}

float op(float op1,float op2,char sym)
{
    switch(sym)
    {
        case '+':return(op1+op2);
        case '-':return(op1-op2);
        case '*':return(op1*op2);
        case '/':return(op1/op2);
        case '^':return(pow(op1,op2));
    }
}

float eval(char postfix[])
{
    int i;
    char sym;
    float op1,op2,value,res;
    for(i=0;i<strlen(postfix);i++)
    {  sym=postfix[i];
        if(isdigit(sym))
        {
            push(sym);
        }
        else if(isalpha(sym))
        {
            printf("enter value for %c:",sym);
            scanf("%f",&value);
            push(value);
        }
        else
        {
            op2=pop();
            op1=pop();
            res=op(op1,op2,sym);
            push(res);
        }
    }
    return pop();
}

int main()
{
    char postfix[20];
    float res;
    printf("Enter postfix expression:");
    gets(postfix);
    res=eval(postfix);
    printf("the value of expression is:%f",res);
    return 0;
}
