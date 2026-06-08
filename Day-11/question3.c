#include<stdio.h>
int isPrime(int);
int main()
{
    int n,c;
    printf("enter a number");
    scanf("%d",&n);
    c=isPrime(n);
    if(c==1)
    printf("prime number");
    else 
    printf("not prime number");
    return 0;
}
int isPrime(int n)
{
int i ,count=0;
for(i=1;i<=n;i++)
{
    if(n%i==0)
    count++;
}
if (count==2)
return 1;
else
return 0;
}


