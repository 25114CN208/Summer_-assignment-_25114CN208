#include<stdio.h>
int Armstrong(int);
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if (Armstrong(n))
    printf("Armstrong number");
    else
    printf("not a Armstrong number");
    return 0;
}
int Armstrong(int n)
{
    int digits,sum=0,orig;
    orig=n;
    while(n>0)
    {
        digits=n%10;
        sum=sum+digits*digits*digits;
        n=n/10;
    }
    return (orig==sum);
}

    