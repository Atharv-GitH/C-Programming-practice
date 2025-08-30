#include <stdio.h>

struct Student{
   int roll;
   char name[20];
};

void display(struct Student s){
   printf("roll=%d name=%s\n",s.roll,s.name);
}

int main(){
   struct Student s1={1,"Atharv"};
   display(s1);
   return 0;
}

