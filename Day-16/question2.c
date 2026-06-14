#include<stdio.h>
int main()
{
    int n,i,j,maxFreq=0,element,a[100],count;
     printf("enter the size of an array");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        int count=1;
        for(j=i+1;j<n;j++)
        {
            if (a[i]==a[j])
            count ++;
        }
         if(count>maxFreq)
        {
        maxFreq=count;
        element=a[i];
        }
    }
    

    printf("maximum frequency element=%d\n",element);
    printf("frequency=%d",maxFreq);
    return 0;
}
    