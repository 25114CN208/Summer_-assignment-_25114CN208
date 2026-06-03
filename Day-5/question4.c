#include <stdio.h>
int main()
{
    int i,n, largest=1;
    printf("enter a number");
    scanf("%d",&n);
    for (i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            largest=i;
            n=n/i;
        }
    }
    printf("largest prime factor is %d",largest);
    return 0;
}
        