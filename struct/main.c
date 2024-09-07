#include <stdio.h>
#include <stdlib.h>

int main()
{
   struct student{
   char name[50];
   char prof[50];
   int age;
   double gpa;
   };
   struct student student1;
   student1.age=56;
   student1.gpa=7.5;
   strcpy(student1.name,"john");
   strcpy(student1.prof,"doctor");

   struct student student2;
   student2.age=96;
   student2.gpa=5.2;
   strcpy(student2.name,"tom");
   strcpy(student2.prof,"civil");

   printf("%s is a %s who is %d old and with a gpa of %f\n",student1.name,student1.prof,student1.age,student1.gpa);
   printf("%s is a %s who is %d old and with a gpa of %f",student2.name,student2.prof,student2.age,student2.gpa);


    return 0;
}
