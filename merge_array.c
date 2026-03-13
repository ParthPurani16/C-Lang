#include <stdio.h>

int main()
{
    int arr1[3], arr2[2], arr3[5];
    int i;

    printf("Enter 3 elements for first array:\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter 2 elements for second array:\n");
    for (i = 0; i < 2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < 3; i++)
    {
        arr3[i] = arr1[i];
    }

    for (i = 3; i < 5; i++)
    {
        arr3[i] = arr2[i - 3];
    }

    printf("Combined array:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}