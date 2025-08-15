// Character Equality or Difference

#include<stdio.h>

void main() {
   
       	char a, b;
    
 
     	scanf(" %c %c", &a, &b);

    
	if(a == b) {
        
		printf("va1=%c var2=%c", a, b);

    	} else {
    
	    	printf("The difference between %c and %c is %d", a, b, b - a);
    }
}

