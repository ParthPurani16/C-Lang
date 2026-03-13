#include <stdio.h>
int main()
{
    int n;
    printf("\n Enter array size:- ");
    scanf("%d", &n);

    int arr[n], copy[n];
    printf("\n Enter %d elements:-", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n You have entered %d elements\n", n);
    for (int i = 0; i < n; i++)
    {
        copy[i] = arr[i];
        printf("%d \n", arr[i]);
    }
    printf("\n COpy Array \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n ", copy[i]);
    }
}