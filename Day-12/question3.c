#include<stdio.h>
int fibonacci(int);
int main()
{
    int n,answer;
    printf("enter the number of terms:");
    scanf("%d",&n);
    answer=fibonacci(n);
    printf("answer=%d",answer);
    return 0;
}
int fibonacci(int n)
{
    int x,y,z;
    x=0,y=1;
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    while(n>1)
    {
        z=x+y;
        x=y;
        y=z;
        n--;
    }
    return y;
}

    