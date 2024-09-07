#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Name [20];
    int percentage = 1;
    int age=2;
    int choice;
    printf("Enter your name=\n");
    fgets(Name,20,stdin);
    printf("hello,good morning %s how can i help you\n",Name);
   while(choice!=3){ printf("\n to calculate percentage click 1\n to calculate age click 2\n to exit click 3");
    scanf("%d",&choice);
    double tmark;
    double mark;
     if(choice==percentage)
        {
            printf("Enter the maximum marks=");
            scanf("%lf",&tmark);
    printf("Enter the obtained marks=");
    scanf("%lf",&mark);
    printf("your percentage is:\n");
    printf("%lf\n", mark*100/tmark );

    if(mark*100/tmark>=35){printf("you are pass\n");}
    if (mark*100/tmark<35){printf(" you are failed \n best of luck for next time\n");}
        }
        int dob;
    if(choice==age)
    {
    printf("enter your year of birth\n");
    scanf("%d",&dob);
    printf("your age is %d\n",2021-dob);
    if(2021-dob<=18){printf("you are young\n");}
    if(2021-dob>18 & 2021-dob<=60){printf("you are adult\n");}
    if(2021-dob>60){printf("you are a senior citizen\n");}
    }
    }}
/* this is my first and my own project shreyas d c*/


