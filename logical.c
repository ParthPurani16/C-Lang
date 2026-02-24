#include<stdio.h>
int main(){
    // logical - &&,||,!
    // relational - <,>,<=,>=,==,!=
    int a,b,c;
    printf("\n Enter a&b&c:");
    scanf("%d %d %d",&a,&b,&c);
    // 10 10
    printf("\n a > b is %d",a>b); //10>10
    // printf("\n a < b is %d",a<b); //10<10
    // printf("\n a >= b is %d",a>=b);
    // printf("\n a <= b is %d",a<=b);
    // printf("\n a == b is %d",a==b);
    // printf("\n a != b is %d",a!=b);
    printf("\n ! a > b is %d",!(a>b)); //10>10

    printf("\n a > b && a> c is %d",(a>b && a>c)); //10>10
    printf("\n a > b || a> c is %d",(a>b || a>c)); //10>10


}