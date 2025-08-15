// Factors of a number

#include<stdio.h>

void main() {
    
	int num, i = 1;
    
	scanf("%d", &num);

   
       	printf("Factors of %d are:\n", num);

    
	while(i <= num) {
        
		if(num % i == 0)
            
			printf("%d\n", i);

		i++;
    }
}

