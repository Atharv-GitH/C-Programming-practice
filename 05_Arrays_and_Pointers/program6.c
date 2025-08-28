#include <stdio.h>

int main(){
   int num[100], n, big, small, i;

   printf("how many:\n");
   scanf("%d",&n);

   for(i=0;i<n;i++){
      scanf("%d",&num[i]);
   }

   big = num[0];
   small = num[0];

   for(i=1;i<n;i++){
      if(num[i] > big)
        big = num[i];
      if(num[i] < small)
        small = num[i];
   }

   printf("max = %d\n",big);
   printf("min = %d\n",small);

   return 0;
}

