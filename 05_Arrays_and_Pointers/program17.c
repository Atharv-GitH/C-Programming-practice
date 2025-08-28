#include <stdio.h>

int main(){
   int arr[4];
   int *p;
   int i;

   for(i=0;i<4;i++){
     scanf("%d",&arr[i]);
   }

   p=arr;

   for(i=0;i<4;i++){
     printf("value=%d address=%p\n",*(p+i),(p+i));
   }

   return 0;
}

