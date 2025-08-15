// Sum of numbers divisible by 5 in a range

#include<stdio.h>

void main() {

    	int start, end, sum = 0;
    
	scanf("%d %d", &start, &end);

    
	int i = start;
    
	while(i <= end) {
        
		if(i % 5 == 0)
           
		       	sum = sum + i;
        
		i++;
    }

    
	printf("Sum = %d", sum);
}

