#include <stdio.h>

int* larger(int *a,int *b){
   if(*a>*b) return a;
   else return b;
}

int main(){
   int x=4,y=9;
   int *p=larger(&x,&y);
   printf("larger=%d\n",*p);
   return 0;
}

