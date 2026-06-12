#include<stdio.h>
int main()
{
    int n,i,a[100],evencount=0,oddcount=0;
    printf("enter the size of an array");
    scanf("%d",&n);
    printf("enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if (a[i]%2==0)
        evencount++;
    }
    for (i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        oddcount++;
    }
    printf("evencount elements are %d",evencount);
    printf("oddcount elements are %d\n",oddcount); 
    return 0;
}
    