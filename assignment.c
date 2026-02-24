#include<stdio.h>
// operators =
//Arithmetic - +,-,*,/,% modulus - reminder 
//increment & decrement = ++ --
//assignment = +=,-=,*=,/=,%=
int main(){
    int a=10,b;
    a+=1; //a=a+1; //a=10+1//11
    printf("A is %d ",a); //11
    a-=5;
    printf("\nA is %d ",a); //6
    //++ +1 --=-1
    b=a++; //postfix first value assign & then increment
    printf("\nA is %d ",a); //7
    printf("\npostfix B is %d ",b); //6
    b=++a; //prefix first increment & then assign a value
    printf("\nA is %d ",a); //8
    printf("\n prefix B is %d ",b); //8
}