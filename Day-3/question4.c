#include <stdio.h>
int main()
{
    int n1,n2,a,b,lcm,rem;
    printf("enter two numbers");
    scanf("%d%d",&n1,&n2);
    a=n1;
    b=n2;
    while(n1%n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
        printf("GCD is %d",n2);
    }
    lcm=a*b/n2;
        printf("lcm is %d\n",lcm);
    return 0;

}