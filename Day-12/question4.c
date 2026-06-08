#include<stdio.h>
int isPerfect(int);
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(isPerfect(n))
    printf("perfect number");
    else
    printf("not a perfect number");
    return 0;
}
int isPerfect(int n)
{
    int i,sum=0,orig;
    orig=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        sum=sum+i;
    }
    return (sum==orig);
}