#include<stdio.h>

int main(){
    int num1, num2, num3, num4;

    printf("Enter num1 : ");
    scanf("%d",&num1);
    printf("Enter num2 : ");
    scanf("%d",&num2);
    printf("Enter num3 : ");
    scanf("%d",&num3);
    printf("Enter num4 : ");
    scanf("%d",&num4);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            if (num1 > num4)
            {
                printf("num1 is max");
            }
            else
            {
                printf("num4 is max");
            }
        }
        else
        {
            if (num3 > num4)
            {
                printf("num3 is max");
            }
            else
            {
                printf("num4 is max");
            }
        }
    }
    else
    {
        if (num2 > num3)
        {
            if (num2 > num4)
            {
                printf("num2 is max");
            }
            else
            {
                printf("num4 is max");
            }
        }
        else
        {
            if (num3 > num4)
            {
                printf("num3 is max");
            }
            else
            {
                printf("num4 is max");
            }
        }
    }

    return 0;
}