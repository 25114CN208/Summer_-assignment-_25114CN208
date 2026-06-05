#include <stdio.h>
int fibonacci(int);
int main()
{
    int n,answer;
    printf("enter number of terms");
    scanf("%d",&n);
    answer=fibonacci(n);
    printf("fibonacci terms=%d",answer);
    return 0;
}
int fibonacci(int n)
{
   if(n==0)
   return 0;
   else if(n==1)
   return 1;
   else
   return fibonacci(n-1)+fibonacci(n-2);
} 
