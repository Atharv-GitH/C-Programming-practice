#include <stdio.h>

void main (){

	printf("no. divisible by 3 (1-100)\n");

	int count = 0;

	for(int i=1; i<=100; i++){
	
		if(i%3 == 0){
		
			printf("%d ",i);
			count ++;
		}
	}
	
		printf("\n");
		printf("%d\n",count);
}
