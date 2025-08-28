#include <stdio.h>

int main(){
   int a[50],b[50],c[100];
   int n1,n2,i,j;

   printf("size of 1st:\n");
   scanf("%d",&n1);

   for(i=0;i<n1;i++)
     scanf("%d",&a[i]);

   printf("size of 2nd:\n");
   scanf("%d",&n2);

   for(i=0;i<n2;i++)
     scanf("%d",&b[i]);

   for(i=0;i<n1;i++)
     c[i]=a[i];

   for(j=0;j<n2;j++){
     c[i]=b[j];
     i++;
   }

   printf("merged array:\n");
   for(i=0;i<n1+n2;i++){
     printf("%d ",c[i]);
   }

   return 0;
}

