#include<stdio.h>
int palindrome(int);
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if (palindrome(n))
    printf("palindrome number");
    else
    printf("Not a palindrome number");
    return 0;
}
int palindrome(int n)
{
    int rev=0,digits;
    int orig;
    orig=n;
    while(n>0)
    {
        digits=n%10;
        rev=rev*10+digits;
        n=n/10;
    }
    return (orig==rev);
}
    