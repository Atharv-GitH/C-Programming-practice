#include <stdio.h>

int main(){

 int numbers[100];
 int size,i;

 printf("enter array size:\n");
 scanf("%d",&size);

 printf("now enter elements one by one\n");
 i=0;
 while(i<size){
   scanf("%d",&numbers[i]);
   i++;
 }

 printf("you entered:\n");
 for(i=0;i<size;i++){
    printf("%d ",numbers[i]);
 }
 
 return 0;
}

