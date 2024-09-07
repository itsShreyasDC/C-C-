#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct student{
    char name[50];
    int age;
    double gpa;
    };


 struct student student1;

   printf("student name=\n");
    fgets(student1.name,50,stdin);
        printf("student age=\n");
    scanf("%d",&student1.age);
        printf("student gpa=\n");
    scanf("%lf",&student1.gpa);
    printf("%s is %d years old and has gpa of %f\n",student1.name,student1.age,student1.gpa);


    return 0;
}
