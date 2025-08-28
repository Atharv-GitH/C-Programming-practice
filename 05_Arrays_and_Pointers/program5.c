#include <stdio.h>

int main(){
   int a[30], count, sum=0;
   int i;

   printf("size ?\n");
   scanf("%d",&count);

   printf("enter elements:\n");
   for(i=0;i<count;i++){
      scanf("%d",&a[i]);
      sum = sum + a[i]; //adding
   }

   printf("total sum = %d\n",sum);
   return 0;
}

