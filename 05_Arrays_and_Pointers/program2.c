#include<stdio.h>

int main() {
    int arr[10][10];
    int rows, cols, i, j;

    printf("Enter rows and cols of 2D array:\n");
    scanf("%d %d",&rows,&cols);

    printf("Enter elements:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("2D Array :\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

