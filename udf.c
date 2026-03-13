#include <stdio.h>

void add()
{
    int a = 15, b = 20;
    printf("\n Addition is:-%d", a + b);
}
void area(float r)
{
    const float pi = 3.14;
    printf("\n Area of circle is %f", pi * r * r);
}
int multi()
{
    int a = 25, b = 10;
    return a + b;
}
int cube(int a, int b)
{
    return a * b * a;
}
void arm(){

    int no, sum = 0, r, f;
    printf("\n Enter no");
    scanf("%d", &no);
    f = no;
    while (no > 0)
    {
        r = no % 10;
        no /= 10;
        sum = sum + (r * r * r);
    }

    printf("\n Sum is digit %d", sum);
    if (f == sum)
    {
        printf("\n It is armstrong no");
    }
    else
    {
        printf("\n It is not armstrong no");
    }
}
int main()
{
    printf("\n Main function called....");
    add();
    area(20);
    printf("\n Multiplication is:-%d", multi());
    printf("\n Cube is %d", cube(4, 6));
    arm();
}
