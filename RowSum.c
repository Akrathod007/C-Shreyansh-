#include <stdio.h>

int main() {
    int arr[3][3];
    int i,j,sum = 0;

    for(i=0;i<3;i++){//for row
        for(j=0;j<3;j++){//for column
            printf("Enter a arr[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<3;i++){
        sum = 0;
        for(j=0;j<3;j++){
            printf("%d ",arr[i][j]);
            sum = sum + arr[i][j];
        }
        printf(" = %d",sum);
        printf("\n");
    }
    return 0;
}