#include <stdio.h>

int main() {
    int arr[10];
    int i,min,max;
    for(i=0;i<10;i++){
        printf("Enter a arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for(i=0;i<10;i++){
        printf("%d ",arr[i]);

        if(arr[i] > max){
            max = arr[i];
        }

        if(arr[i] < min){
            min = arr[i];
        }
    }

    printf("\nMaximum Element is %d",max);
    printf("\nMinimum Element is %d",min);

    return 0;
}