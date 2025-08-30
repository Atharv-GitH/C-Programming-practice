#include <stdio.h>

struct Point{
   int x,y;
};

struct Point makePoint(int a,int b){
   struct Point p;
   p.x=a; p.y=b;
   return p;
}

int main(){
   struct Point p1=makePoint(2,5);
   printf("point=(%d,%d)\n",p1.x,p1.y);
   return 0;
}

