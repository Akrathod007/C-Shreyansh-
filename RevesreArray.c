#include <stdio.h>

int main()
{
    int arr[10], rev[10], copy[10];
    int i, track = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Enter a arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal Array\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
        copy[i] = arr[i];
    }

    printf("\n\n");
    for (i = 9; i >= 0; i--)
    {
        rev[track] = arr[i];
        // rev[0] = arr[9]
        // rev[1] = arr[8]
        track++;
    }

    printf("\nCopy Array\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", copy[i]);
    }
    printf("\nReverse Array\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", rev[i]);
    }
    return 0;
}