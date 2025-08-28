#include <stdio.h>
#include <stdlib.h>

int main(){
   int *p,n,i,sum=0;

   printf("enter size:\n");
   scanf("%d",&n);

   p = (int*)malloc(n*sizeof(int));

   if(p==NULL){
     printf("memory not allocated\n");
     return 0;
   }

   printf("enter elements:\n");
   for(i=0;i<n;i++){
      scanf("%d",&p[i]);
      sum=sum+p[i];
   }

   printf("sum=%d\n",sum);

   free(p);

   return 0;
}

