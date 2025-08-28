#include <stdio.h>

int main(){
   int arr[5]={1,2,3,4,5};
   int *p;
   int i;

   p=arr; // same as &arr[0]

   for(i=0;i<5;i++){
     printf("arr[%d]=%d address=%p\n",i,*(p+i),(p+i));
   }

   return 0;
}

