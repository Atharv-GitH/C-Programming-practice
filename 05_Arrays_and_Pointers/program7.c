#include <stdio.h>

int main(){
  int arr[40],n,x,i,found=0;

  printf("enter array size:\n");
  scanf("%d",&n);

  for(i=0;i<n;i++){
     scanf("%d",&arr[i]);
  }

  printf("enter element to search:\n");
  scanf("%d",&x);

  i=0;
  while(i<n){
     if(arr[i]==x){
       printf("found at index %d\n",i);
       found=1;
       break;
     }
     i++;
  }

  if(found==0){
    printf("not found\n");
  }
  return 0;
}

