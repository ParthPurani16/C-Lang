#include <stdio.h>
int main()
{
    int no, sum = 0, r, f, rev = 0, e, multi, t;
    printf("\n Enter no");
    scanf("%d", &no);
    f = no;
    while (no > 0)
    {
        r = no % 10;
        no /= 10;
        sum = sum + r;
    }
    t = sum;
    while (t > 0)
    {
        e = t % 10;
        t /= 10;
        rev = (rev * 10) + e;
    }
    multi = sum * rev;

    printf("\n Sum is: %d", sum);
    printf("\n Rev no is %d", rev);
    printf("\n Multplication is: %d", multi);

    if (multi == f)
    {
        printf("\n Is magic no");
    }
    else
    {
        printf("\n Not magic no");
    }
    return 0;
}
