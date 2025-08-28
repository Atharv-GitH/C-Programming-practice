#include <stdio.h>

void hello(){
   printf("hello world\n");
}

void bye(){
   printf("goodbye\n");
}

int main(){
   void (*fptr)();

   fptr=hello;
   fptr();

   fptr=bye;
   fptr();

   return 0;
}

