#include<stdio.h>
int main(){
    int no,count=0,sum=0,r;
    printf("\n Enter no:");
    scanf("%d",&no);
    while (no>0)
    {
        r=no%10;
        no=no/10;
        count++;
        sum=sum+r;

    }
    printf("\n count is %d",count);
    printf("\n Sum of digits are %d",sum);
    
}