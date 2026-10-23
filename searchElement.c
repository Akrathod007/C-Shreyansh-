#include <stdio.h>

int main()
{
    int arr[10],target,i,f = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Enter a arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter a target element : ");
    scanf("%d",&target);

    for(i=0;i<10;i++){
        if(target == arr[i]){
            f = 1;
            break;
        }
    }
    if(f == 1){
            printf("\n%d is found at index %d in array",target,i);
    }
    else{
        printf("\n%d is not found in array",target);
    }
    return 0;
}