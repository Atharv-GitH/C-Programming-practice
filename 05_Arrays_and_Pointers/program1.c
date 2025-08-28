#include<stdio.h>

int main() {
    int arr[50], n, i;

    printf("Enter size of 1D array:\n");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("1D Array elements are:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

