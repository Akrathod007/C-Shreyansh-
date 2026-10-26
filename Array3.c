#include <stdio.h>

int main() {
    int arr[50];
    int size;
    int i;
    printf("Enter a size of array : ");
    scanf("%d",&size);

    for(i=0;i<size;i++){
        printf("Enter a arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++){
        printf("arr[%d] : %d\n",i,arr[i]);
    }
    return 0;
}