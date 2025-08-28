#include <stdio.h>

int main(){
   int arr[50],n,i,ev=0,od=0;

   scanf("%d",&n);

   for(i=0;i<n;i++){
     scanf("%d",&arr[i]);
   }

   for(i=0;i<n;i++){
     if(arr[i]%2==0)
       ev++;
     else
       od++;
   }

   printf("even=%d odd=%d\n",ev,od);

   return 0;
}

