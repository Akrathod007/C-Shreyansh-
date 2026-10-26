#include <stdio.h>

int main() {
    int arr[3][3];
    int i,j,sum = 0,es = 0,os = 0;

    for(i=0;i<3;i++){//for row
        for(j=0;j<3;j++){//for column
            printf("Enter a arr[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            // printf("arr[%d][%d] : %d\n",i,j,arr[i][j]);
            printf("%d ",arr[i][j]);
            sum = sum + arr[i][j];

            if(arr[i][j] % 2 == 0){
                es = es + arr[i][j];
            }
            else{
                os = os + arr[i][j];
            }
        }
        printf("\n");
    }

    printf("Total Sum is %d\n",sum);
    printf("Even Sum is %d\n",es);
    printf("Odd Sum is %d\n",os);
    return 0;
}