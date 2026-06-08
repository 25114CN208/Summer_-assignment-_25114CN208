#include<stdio.h>
int maximum(int,int);
int main()
{
    int a ,b,largest;
    printf("enter two numbers:\n");
    scanf("%d%d",&a,&b);
    largest=maximum(a,b);
    printf("largest=%d",largest);
    return 0;
}
int maximum(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}

