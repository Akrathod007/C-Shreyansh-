#include <stdio.h>

int main()
{
    int arr[3][3];
    int i, j, rightSum = 0, leftSum = 0;

    for (i = 0; i < 3; i++)
    { // for row
        for (j = 0; j < 3; j++)
        { // for column
            printf("Enter a arr[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",arr[i][j]);
            if(i == j){
                leftSum = leftSum + arr[i][j];
            }

            if(i + j == (3 - 1)){
                rightSum = rightSum + arr[i][j];
            }
        }
        printf("\n");
    }

    printf("\nLeft Sum is %d",leftSum);
    printf("\nRight Sum is %d",rightSum);

    return 0;
}