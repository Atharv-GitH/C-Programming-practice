#include<stdio.h>

int main() {
    int arr[5][5][5];
    int x, y, z;
    int i,j,k;

    printf("Enter size (x y z) for 3D array:\n");
    scanf("%d %d %d",&x,&y,&z);

    printf("Enter elements:\n");
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            for(k=0;k<z;k++){
                scanf("%d",&arr[i][j][k]);
            }
        }
    }

    printf("3D Array elements:\n");
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            for(k=0;k<z;k++){
                printf("arr[%d][%d][%d] = %d\n",i,j,k,arr[i][j][k]);
            }
        }
    }

    return 0;
}

