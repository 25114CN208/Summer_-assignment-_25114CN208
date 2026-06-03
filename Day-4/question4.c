#include<stdio.h>
int main()
{
    int n,tem,rem,sum,start,end;
    printf("enter starting number");
    scanf("%d",&start);
    printf("enter ending number");
    scanf("%d",&end);
    printf("armstrng numbers between %d and %d are:\n",start,end);
    for(n=start;n<=end;n++)
    {
        sum=0;
        tem=n;
        while(tem!=0)
        {
            rem=tem%10;
            sum=sum+rem*rem*rem;
            tem=tem/10;
        }
        if(sum==n)
        {
            printf("%d\n",n);
        }
    }
    return 0;
}