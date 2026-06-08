#include<stdio.h>
int factorial(int);
int main()
{
    int n,answer;
    printf("enter the number:");
    scanf("%d",&n);
    answer=factorial(n);
    printf("answer=%d",answer);
    return 0;
}
int factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    return fact;
}
    