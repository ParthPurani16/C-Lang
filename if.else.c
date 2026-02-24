#include<stdio.h>
int main(){
    int a,b;
    printf("\n Enter a & b:");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("\n A is maximum");
    } else {
        printf("\n B is maximum");
    }
}