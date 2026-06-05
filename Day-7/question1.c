#include<stdio.h>
int fact(int);
int main()
{
    int n,answer;
    printf("enter a number");
    scanf("%d",&n);
    answer=fact(n);
    printf("fact=%d",answer);
    return 0;
}
int fact(int n)
{
    int f;
    if(n==0)
    return 1;
    else
    f=n*fact(n-1);
    return f;
}