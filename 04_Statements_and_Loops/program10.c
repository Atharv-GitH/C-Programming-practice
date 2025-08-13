#include<stdio.h>

void main (){

	float income;
	printf("Enter your annal ncome\n");

	scanf("%f",&income);
	printf("%f\n",income);

	if(income >= 0000 && income <= 500000){
	
		printf("your income tax slab is 0 percent\n");
	}

	if(income >= 500000 && income <= 1000000){
	
		printf("your income tax slab is 10 percent\n");
	}
	
	if(income >= 1000000 && income <= 1500000){
	
		printf("your income tax slab is 20 percent\n");
	}
	
	if(income >= 1500000 && income <= 2000000){
	
		printf("your income tax slab is 30 percent\n");
	}
}
