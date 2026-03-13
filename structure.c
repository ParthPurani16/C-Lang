#include<stdio.h>
struct emp
{
    int emp_id,salary;
    char emp_name[100];
}e1;
int main(){
    struct emp e2;
    e1.emp_id=101;
    e2.emp_id=102;
    e1.salary=10000;
    e2.salary=25000;
    printf("Enter name 1:");
    scanf("%s",e1.emp_name);
    printf("Enter name 2:");
    scanf("%s",e2.emp_name);
    printf("\n Emp id 1 is %d",e1.emp_id);
    printf("\n Emp id 2 is %d",e2.emp_id);
    printf("\n Emp id 1 salary is: %d",e1.salary);
    printf("\n Emp id 2 salary is: %d",e2.salary);
}
