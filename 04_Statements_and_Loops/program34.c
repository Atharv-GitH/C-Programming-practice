//Even numbers reverse, odd numbers forward (in range)

#include<stdio.h>

void main() {
    int start, end;
    scanf("%d %d", &start, &end);

    int i;

    printf("Even numbers in reverse:\n");
    i = end;
    while(i >= start) {
        if(i % 2 == 0)
            printf("%d ", i);
        i--;
    }

    printf("\nOdd numbers in normal order:\n");
    i = start;
    while(i <= end) {
        if(i % 2 != 0)
            printf("%d ", i);
        i++;
    }
}

