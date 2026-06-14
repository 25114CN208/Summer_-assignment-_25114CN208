#include<stdio.h>
int main()
{
    int n,i,j,a[100],sum,found=0;
    printf("enter the size of an array");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("enter required sum:");
    scanf("%d",&sum);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==sum)
            {
                printf("pair found:%d and %d\n",a[i],a[j]);
                found=1;
            }
        }
    }
    if (found==0)
    {
        printf(" no pair found");
    }
    return 0;
}

    



