#include<stdio.h>
int main()
{
    int n,i,a[100],sum=0,missing ,total ;
    printf("enter the size of an array");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n-1;i++)
    scanf("%d",&a[i]);
    for (i=0;i<n-1;i++)
    {
        sum=sum+a[i];
    }
    total = n*(n+1)/2;
    missing= total -sum;
    printf("missing number=%d",missing);
    return 0;
}
    