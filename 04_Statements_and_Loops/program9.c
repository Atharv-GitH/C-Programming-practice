#include<stdio.h>

void main (){

	char userData;
	printf("Enter character\n");

	scanf("%c",&userData);
	printf("%c\n",userData);

	if(userData >= 'A' && userData <= 'Z'){
	
		printf("you entered capital letter\n");
	}
 
 	if(userData >= 'a' && userData <= 'z'){
                                                                                                                                                                            printf("you entered small letter\n");
	}
}
