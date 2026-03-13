#include<stdio.h>
int main(){
    int i,m,n,arr[50][50],j;
    int sum=0;
    printf("enter rows and collumn :-");
    scanf("%d %d ",&m,&n);
    printf("enter value :-");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
            sum = sum + arr[i][j];
        }
        
    }
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
        
    }
    
    printf("addition of array is = %d",&sum);
}