#include <stdio.h>

int main(){
   int first[20], second[20], n,i;

   printf("size:\n");
   scanf("%d",&n);

   printf("enter array:\n");
   for(i=0;i<n;i++){
      scanf("%d",&first[i]);
   }

   for(i=0;i<n;i++){
      second[i] = first[i];
   }

   printf("copied:\n");
   for(i=0;i<n;i++){
      printf("%d ",second[i]);
   }

   return 0;
}

