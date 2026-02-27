#include<stdio.h>
int main(){
    int no , sum=0,r,f,rev=0;
    printf("\n Enter no");
    scanf("%d",&no);
    f=no;
    while(no>0){
        r=no%10;
        no/=10;
        rev= (rev*10)+r;
    }
    printf("\n Reverse no is: %d",rev);
    if(f==rev){
        printf("\n Its palindrom no");

    }else{
        printf("\n Its not palindrom no");
    }
    
}