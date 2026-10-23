#include <stdio.h>

int main() {
    int arr[10];
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;
    // arr[3] = 40;
    // arr[4] = 50;
    // arr[5] = 60;
    // arr[6] = 70;
    // arr[7] = 80;
    // arr[8] = 90;
    // arr[9] = 100;

    // printf("\narr[0] : %d",arr[0]);
    // printf("\narr[1] : %d",arr[1]);
    // printf("\narr[2] : %d",arr[2]);
    // printf("\narr[3] : %d",arr[3]);
    // printf("\narr[4] : %d",arr[4]);
    // printf("\narr[5] : %d",arr[5]);
    // printf("\narr[6] : %d",arr[6]);
    // printf("\narr[7] : %d",arr[7]);
    // printf("\narr[8] : %d",arr[8]);
    // printf("\narr[9] : %d",arr[9]);
    int i,sum = 0,es = 0,os = 0;

    for(i=0;i<10;i++){
        printf("Enter a arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<10;i++){
        printf("arr[%d] : %d\n",i,arr[i]);
        sum = sum + arr[i];
        if(arr[i] % 2 == 0){
            es = es + arr[i];
        }
        else{
            os = os + arr[i];
        }
    }

    printf("\nFinal Sum is %d",sum);
    printf("\nOdd Sum is %d",os);
    printf("\nEven Sum is %d",es);
    return 0;
}