#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("enetr a number");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("number of digits: %d", count);
    return 0;
}