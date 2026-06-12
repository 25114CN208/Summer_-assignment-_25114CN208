#include<stdio.h>
int main()
{
    int n,i,a[10];
    printf("enter the size of an array");
    scanf("%d",&n);
    printf("enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
    