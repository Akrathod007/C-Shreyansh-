#include <stdio.h>

int main() {
    //int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    //int arr[10] = {1,2,3,4,5,6};
    int arr[] = {10,20,30,40,50,60,70,80};
    int i,size;
    printf("\nsizeof(arr) : %d\n",sizeof(arr));
    printf("\nSize : %d\n",sizeof(arr) / sizeof(arr[0]));
    size  = sizeof(arr) / sizeof(arr[0]);
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    // printf("\nsizeof(int) : %d",sizeof(int));
    // printf("\nsizeof(float) : %d",sizeof(float));
    // printf("\nsizeof(char) : %d",sizeof(char));
    // printf("\nsizeof(double) : %d",sizeof(double));
    // printf("\nsizeof(i) : %d",sizeof(i));

    return 0;
}