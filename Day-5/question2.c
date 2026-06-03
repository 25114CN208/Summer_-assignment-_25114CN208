#include <stdio.h>
int main()
{
    int n ,i=1,fact=1,sum=0,rem,orig;
    printf("enter a number");
    scanf("%d",&n);
    orig=n;
    while(n)
    {
        rem=n%10;
        while(i<=rem)
        {
            fact=fact*i;
            i++;
        }
        sum=sum+fact;
        n=n/10;
    }
    if (sum==orig)
    printf(" %d is a strong number",sum);
    else
    printf(" %d is not a strong number",sum);
    return 0;
}
        