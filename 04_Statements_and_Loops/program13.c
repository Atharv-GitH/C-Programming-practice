// Print first 10 capital alphabets

#include<stdio.h>

void main() {
    char ch = 'A';
    int count = 0;

    while(count < 10) {
        printf("%c ", ch);
        ch++;
        count++;
    }
}

