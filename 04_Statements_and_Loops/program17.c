// Print ASCII values from 0 to 127

#include<stdio.h>

void main() {
    int i = 0;

    while(i <= 127) {
        printf("%d -> %c\n", i, i);
        i++;
    }
}

