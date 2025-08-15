// Number Spelling (switch)

#include<stdio.h>

void main() {
    int num;
    scanf("%d", &num);

    switch(num) {

        case 1: printf("one");
	       	break;
        case 2: printf("two");
	       	break;
        case 3: printf("three");
	       	break;
        case 4: printf("four");
	       	break;
        case 5: printf("five");
	       	break;

        default: printf("%d is greater than 5", num);
    }
}

