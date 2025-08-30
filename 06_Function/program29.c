#include <stdio.h>

int sumArr(int arr[],int n){
   int i,s=0;
   for(i=0;i<n;i++) s=s+arr[i];
   return s;
}

int main(){
   int a[5]={1,2,3,4,5};
   printf("sum=%d\n",sumArr(a,5));
   return 0;
}

