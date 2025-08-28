#include <stdio.h>

struct Student{
   int roll;
   char name[20];
};

int main(){
   struct Student s1={1,"Atharv"};
   struct Student *p;

   p=&s1;

   printf("roll=%d name=%s\n",p->roll,p->name);

   return 0;
}

