#include<stdio.h>
int main()
{
    int  i,j,n,k;
    printf("enter the number");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=n-i;j>=1;j--)
        {
            printf("  ");
        }
        for(k=2*i-1;k>=1;k--)
        {
            printf("* ");
            
        }
        printf("\n");
    }
    return 0;
}
