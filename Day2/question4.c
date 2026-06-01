#include <stdio.h>
int main()
{
    int n , digit,reverse=0,original;
    printf("enetr a number:");
    scanf("%d",&n);
    original=n;
    while(n!=0)
    {
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    if(original==reverse)
    {
        printf("the number is palindrome");
    }
    else
    {
        printf("the number is not palindrome");
    }
    return 0;
}