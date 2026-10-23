#include <stdio.h>

int main()
{
    int arr[7];
    int i, j, t,count = 0;
    for (i = 0; i < 7; i++)
    {
        printf("Enter a arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Before Sorting\n");
    for (i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
    for (i = 0; i < 7; i++)
    { // Pass
        for (j = 0; j < 6 - i; j++)
        { // subpass
            if (arr[j] > arr[j + 1])
            {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
            count++;
        }
    }
    printf("\nAfter Sorting\n");
    for (i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nCount is %d",count);
    return 0;
}