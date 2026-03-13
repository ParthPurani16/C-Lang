#include<stdio.h>
int main(){

    int arr[5]={34,44,8,12,15};
    int i;
    int max;

     max = arr[0];

    for(i=0; i<5; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Maximum number = %d", max);

    return 0;
}