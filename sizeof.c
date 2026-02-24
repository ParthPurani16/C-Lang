int main(){
    int a,b,age;
    a=21;
    b=25;
    printf("int size is %d byte",sizeof(int));
    printf("\n float size is %d byte",sizeof(float));
    printf("\n char size is %d byte",sizeof(char));
    printf("\nshort size is %d byte",sizeof(short));
    printf("\n long size is %d byte",sizeof(long));
    printf("\n double size is %d byte",sizeof(double));
    // ternary/conditional = ?:
    (a>b)?printf("\n A is max"):printf("\n B is max");
    age=15;
    (age>=18)?printf("\n eligible 4 vote"):printf("\n Not eligible 4 vote");
    (a%2==0)?printf("\n No is even"):printf("\n No is odd");
}