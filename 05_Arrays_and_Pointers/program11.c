#include <stdio.h>

int main(){
   int arr[40],n,pos,i;

   printf("size:\n");
   scanf("%d",&n);

   for(i=0;i<n;i++)
     scanf("%d",&arr[i]);

   printf("delete pos?\n");
   scanf("%d",&pos);

   for(i=pos-1;i<n-1;i++){
     arr[i]=arr[i+1];
   }
   n--;

   printf("after delete:\n");
   for(i=0;i<n;i++)
     printf("%d ",arr[i]);

   return 0;
}

