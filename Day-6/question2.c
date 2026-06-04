#include <stdio.h>
int main()
{
    int n,rem,sum=0,base=1;
    printf("enter a binary number");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem*base;
        n=n/10;
        base=base*2;
    }
    printf("decimal number=%d",sum);
    return 0;
}
    